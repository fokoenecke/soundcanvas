/*
 * This file is part of the OpenKinect Project. http://www.openkinect.org
 *
 * Copyright (c) 2011 individual OpenKinect contributors. See the CONTRIB file
 * for details.
 *
 * This code is licensed to you under the terms of the Apache License, version
 * 2.0, or, at your option, the terms of the GNU General Public License,
 * version 2.0. See the APACHE20 and GPL2 files for the text of the licenses,
 * or the following URLs:
 * http://www.apache.org/licenses/LICENSE-2.0
 * http://www.gnu.org/licenses/gpl-2.0.txt
 *
 * If you redistribute this file in source form, modified or unmodified, you
 * may:
 *   1) Leave this header intact and distribute it under the same terms,
 *      accompanying it with the APACHE20 and GPL20 files, or
 *   2) Delete the Apache 2.0 clause and accompany it with the GPL2 file, or
 *   3) Delete the GPL v2 clause and accompany it with the APACHE20 file
 * In all cases you must keep the copyright notice intact and include a copy
 * of the CONTRIB file.
 *
 * Binary distributions must follow the binary distribution requirements of
 * either License.
 */

/** @file Protonect.cpp Main application file. */

#include <iostream>
#include <signal.h>

#include "SoundCanvas.h"

/// [headers]
#include <libfreenect2/libfreenect2.hpp>
#include <libfreenect2/frame_listener_impl.h>
#include <libfreenect2/registration.h>
#include <libfreenect2/packet_pipeline.h>
#include <libfreenect2/logger.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <drumstick.h>

/// [headers]
#ifdef EXAMPLES_WITH_OPENGL_SUPPORT
#include "viewer.h"
#endif


bool protonect_shutdown = false; ///< Whether the running application should shut down.

void sigint_handler(int s)
{
  protonect_shutdown = true;
}

bool protonect_paused = false;
libfreenect2::Freenect2Device *devtopause;

//Doing non-trivial things in signal handler is bad. If you want to pause,
//do it in another thread.
//Though libusb operations are generally thread safe, I cannot guarantee
//everything above is thread safe when calling start()/stop() while
//waitForNewFrame().
void sigusr1_handler(int s)
{
  if (devtopause == 0)
    return;
/// [pause]
  if (protonect_paused)
    devtopause->start();
  else
    devtopause->stop();
  protonect_paused = !protonect_paused;
/// [pause]
}

//The following demostrates how to create a custom logger
/// [logger]
#include <fstream>
#include <cstdlib>
class MyFileLogger: public libfreenect2::Logger
{
private:
  std::ofstream logfile_;
public:
  MyFileLogger(const char *filename)
  {
    if (filename)
      logfile_.open(filename);
    level_ = Debug;
  }
  bool good()
  {
    return logfile_.is_open() && logfile_.good();
  }
  virtual void log(Level level, const std::string &message)
  {
    logfile_ << "[" << libfreenect2::Logger::level2str(level) << "] " << message << std::endl;
  }
};
/// [logger]

/// [main]
/**
 * Main application entry point.
 *
 * Accepted argumemnts:
 * - cpu Perform depth processing with the CPU.
 * - gl  Perform depth processing with OpenGL.
 * - cl  Perform depth processing with OpenCL.
 * - <number> Serial number of the device to open.
 * - -noviewer Disable viewer window.
 */
int main(int argc, char *argv[])
/// [main]
{

  std::string program_path(argv[0]);
  std::cerr << "Environment variables: LOGFILE=<protonect.log>" << std::endl;
  std::cerr << "Usage: " << program_path << " [gl | cl | cpu] [<device serial>] [-noviewer]" << std::endl;
  std::cerr << "To pause and unpause: pkill -USR1 Protonect" << std::endl;
  size_t executable_name_idx = program_path.rfind("Protonect");

  std::string binpath = "/";

  if(executable_name_idx != std::string::npos)
  {
    binpath = program_path.substr(0, executable_name_idx);
  }

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
  // avoid flooing the very slow Windows console with debug messages
  libfreenect2::setGlobalLogger(libfreenect2::createConsoleLogger(libfreenect2::Logger::Info));
#else
  // create a console logger with debug level (default is console logger with info level)
/// [logging]
  libfreenect2::setGlobalLogger(libfreenect2::createConsoleLogger(libfreenect2::Logger::Debug));
/// [logging]
#endif
/// [file logging]
  MyFileLogger *filelogger = new MyFileLogger(getenv("LOGFILE"));
  if (filelogger->good())
    libfreenect2::setGlobalLogger(filelogger);
/// [file logging]

/// [context]
  libfreenect2::Freenect2 freenect2;
  libfreenect2::Freenect2Device *dev = 0;
  libfreenect2::PacketPipeline *pipeline = 0;
/// [context]

/// [discovery]
  if(freenect2.enumerateDevices() == 0)
  {
    std::cout << "no device connected!" << std::endl;
    std::cout << "testroutine" << std::endl;

    SoundCanvas q1 = SoundCanvas("q1");
    //SoundCanvas q2 = SoundCanvas("q2");
    //SoundCanvas q3 = SoundCanvas("q3");
    //SoundCanvas q4 = SoundCanvas("q4");

    //while(true) {
      //q1.Update(static_cast <float> (rand()) / static_cast <float> (RAND_MAX/255), (int) (rand() / (RAND_MAX/255)), static_cast <float> (rand()) / static_cast <float> (RAND_MAX/200));
      //q2.Update(static_cast <float> (rand()) / static_cast <float> (RAND_MAX/255), (int) (rand() / (RAND_MAX/255)), static_cast <float> (rand()) / static_cast <float> (RAND_MAX/200));
      //q3.Update(static_cast <float> (rand()) / static_cast <float> (RAND_MAX/255), (int) (rand() / (RAND_MAX/255)), static_cast <float> (rand()) / static_cast <float> (RAND_MAX/200));
      //q4.Update(static_cast <float> (rand()) / static_cast <float> (RAND_MAX/255), (int) (rand() / (RAND_MAX/255)), static_cast <float> (rand()) / static_cast <float> (RAND_MAX/200));
    //}

    return -1;
  }

  std::string serial = freenect2.getDefaultDeviceSerialNumber();
/// [discovery]

  bool viewer_enabled = true;

  for(int argI = 1; argI < argc; ++argI)
  {
    const std::string arg(argv[argI]);

    if(arg == "cpu")
    {
      if(!pipeline)
/// [pipeline]
        pipeline = new libfreenect2::CpuPacketPipeline();
/// [pipeline]
    }
    else if(arg == "gl")
    {
#ifdef LIBFREENECT2_WITH_OPENGL_SUPPORT
      if(!pipeline)
        pipeline = new libfreenect2::OpenGLPacketPipeline();
#else
      std::cout << "OpenGL pipeline is not supported!" << std::endl;
#endif
    }
    else if(arg == "cl")
    {
#ifdef LIBFREENECT2_WITH_OPENCL_SUPPORT
      if(!pipeline)
        pipeline = new libfreenect2::OpenCLPacketPipeline();
#else
      std::cout << "OpenCL pipeline is not supported!" << std::endl;
#endif
    }
    else if(arg.find_first_not_of("0123456789") == std::string::npos) //check if parameter could be a serial number
    {
      serial = arg;
    }
    else if(arg == "-noviewer")
    {
      viewer_enabled = false;
    }
    else
    {
      std::cout << "Unknown argument: " << arg << std::endl;
    }
  }

  if(pipeline)
  {
/// [open]
    dev = freenect2.openDevice(serial, pipeline);
/// [open]
  }
  else
  {
    dev = freenect2.openDevice(serial);
  }

  if(dev == 0)
  {
    std::cout << "failure opening device!" << std::endl;
    return -1;
  }

  devtopause = dev;

  signal(SIGINT,sigint_handler);
#ifdef SIGUSR1
  signal(SIGUSR1, sigusr1_handler);
#endif
  protonect_shutdown = false;

/// [listeners]
  libfreenect2::SyncMultiFrameListener listener(libfreenect2::Frame::Color | libfreenect2::Frame::Ir | libfreenect2::Frame::Depth);
  libfreenect2::FrameMap frames;

  dev->setColorFrameListener(&listener);
  dev->setIrAndDepthFrameListener(&listener);
/// [listeners]

/// [start]
  dev->start();

  std::cout << "device serial: " << dev->getSerialNumber() << std::endl;
  std::cout << "device firmware: " << dev->getFirmwareVersion() << std::endl;
/// [start]

/// [registration setup]
  libfreenect2::Freenect2Device::IrCameraParams irParams;
  irParams = dev->getIrCameraParams();

  libfreenect2::Registration* registration = new libfreenect2::Registration(irParams, dev->getColorCameraParams());
  libfreenect2::Frame undistorted(512, 424, 4), registered(512, 424, 4);
/// [registration setup]

  size_t framecount = 0;
#ifdef EXAMPLES_WITH_OPENGL_SUPPORT
  Viewer viewer;
  if (viewer_enabled)
    viewer.initialize();
#else
  viewer_enabled = false;
#endif

/// [loop start]
  while(!protonect_shutdown)
  {
    listener.waitForNewFrame(frames);
    libfreenect2::Frame *rgb = frames[libfreenect2::Frame::Color];
    libfreenect2::Frame *ir = frames[libfreenect2::Frame::Ir];
    libfreenect2::Frame *depth = frames[libfreenect2::Frame::Depth];

    cv::Mat MatDepth = cv::Mat(depth->height, depth->width, CV_32FC1, depth->data) / 1000.0f;
    int offset = ((MatDepth.cols - MatDepth.rows)/2);
    cv::Rect squared = cv::Rect(offset, 0, MatDepth.rows, MatDepth.rows);
    cv::Mat MatDepthSquared = MatDepth(squared);

    // TODO replace with something faster
    for(int y = 0; y < MatDepthSquared.rows; y++) {
      for(int x = 0; x < MatDepthSquared.cols; x++) {
        float value = MatDepthSquared.at<float>(y, x);
        if (value == 0.0f) {
          MatDepthSquared.at<float>(y, x) = 1.0f;
        }
      }
    }

    int halfWidth = MatDepthSquared.cols / 2;
    int halfHeight = MatDepthSquared.rows / 2;
    cv::Point mid = cv::Point(halfWidth/2, halfHeight/2);

    cv::Rect rect1 = cv::Rect(0, 0, halfWidth, halfHeight);
    cv::Mat q1 = MatDepthSquared(rect1);
    cv::Scalar mean1 = cv::mean(q1);
    double minVal1; double maxVal1; cv::Point minLoc1; cv::Point maxLoc1;
    minMaxLoc( q1, &minVal1, &maxVal1, &minLoc1, &maxLoc1, cv::Mat() );
    double distance1 = cv::norm(mid-minLoc1);

//    cv::Rect rect2 = cv::Rect(halfWidth, 0, halfWidth, halfHeight);
//    cv::Mat q2 = MatDepthSquared(rect2);
//    cv::Scalar mean2 = cv::mean(q1);
//    double minVal2; double maxVal2; cv::Point minLoc2; cv::Point maxLoc2;
//    minMaxLoc( q2, &minVal2, &maxVal2, &minLoc2, &maxLoc2, cv::Mat() );
//    double distance2 = cv::norm(mid-minLoc2);

//    cv::Rect rect3 = cv::Rect(0, halfHeight, halfWidth, halfHeight);
//    cv::Mat q3 = MatDepthSquared(rect3);
//    cv::Scalar mean3 = cv::mean(q1);
//    double minVal3; double maxVal3; cv::Point minLoc3; cv::Point maxLoc3;
//    minMaxLoc( q3, &minVal3, &maxVal3, &minLoc3, &maxLoc3, cv::Mat() );
//    double distance3 = cv::norm(mid-minLoc3);

//    cv::Rect rect4 = cv::Rect(halfWidth, halfHeight, halfWidth, halfHeight);
//    cv::Mat q4 = MatDepthSquared(rect4);
//    cv::Scalar mean4 = cv::mean(q1);
//    double minVal4; double maxVal4; cv::Point minLoc4; cv::Point maxLoc4;
//    minMaxLoc( q4, &minVal4, &maxVal4, &minLoc4, &maxLoc4, cv::Mat() );
//    double distance4 = cv::norm(mid-minLoc4);

/// [loop start]

/// [registration]
    registration->apply(rgb, depth, &undistorted, &registered);
/// [registration]

    framecount++;
    if (!viewer_enabled)
    {
      if (framecount % 100 == 0)
        std::cout << "The viewer is turned off. Received " << framecount << " frames. Ctrl-C to stop." << std::endl;
      listener.release(frames);
      continue;
    }

#ifdef EXAMPLES_WITH_OPENGL_SUPPORT
    viewer.addFrame("RGB", rgb);
    //viewer.addFrame("ir", ir);
    viewer.addFrame("depth", depth);
    viewer.addFrame("registered", &registered);

    cv::namedWindow( "Display window1", cv::WINDOW_AUTOSIZE );// Create a window for display.
    cv::imshow( "Display window1", q1);
    cv::imshow( "Display window2", q2);
    cv::imshow( "Display window3", q3);
    cv::imshow( "Display window4", q4);
    cv::waitKey(1);

    protonect_shutdown = protonect_shutdown || viewer.render();
#endif

/// [loop end]
    listener.release(frames);
    /** libfreenect2::this_thread::sleep_for(libfreenect2::chrono::milliseconds(100)); */
  }
/// [loop end]

  // TODO: restarting ir stream doesn't work!
  // TODO: bad things will happen, if frame listeners are freed before dev->stop() :(
/// [stop]
  dev->stop();
  dev->close();
/// [stop]

  delete registration;

  return 0;
}
