# Install script for directory: /home/ole/testg/drumstick-1.0.2/utils

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ole/testg/drumstick-1.0.2/build/utils/common/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/buildsmf/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/dumpsmf/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/dumpwrk/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/dumpove/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/test-rt/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/vpiano/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/dumpmid/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/playsmf/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/guiplayer/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/sysinfo/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/testevents/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/timertest/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/metronome/cmake_install.cmake")
  include("/home/ole/testg/drumstick-1.0.2/build/utils/drumgrid/cmake_install.cmake")

endif()

