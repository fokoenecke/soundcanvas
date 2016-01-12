TEMPLATE = app
TARGET = drumstick-soundcanvas
QT += dbus
CONFIG += qt console thread exceptions link_prl
DESTDIR = ../../build/bin
INCLUDEPATH += . ../../library/include ../common 
DEPENDPATH += . ../../library ../../library/include
LIBS = -L../../build/lib -ldrumstick-common -ldrumstick-alsa -lasound
PRE_TARGETDEPS += $$OUT_PWD/../../build/lib/libdrumstick-common.a
include (../../global.pri)
# Input
SOURCES += soundcanvas.cpp
SOURCES += SoundCanvas.cpp
HEADERS += SoundCanvas.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/libfreenect2/build/lib/release/ -lfreenect2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/libfreenect2/build/lib/debug/ -lfreenect2
else:unix: LIBS += -L$$PWD/libfreenect2/build/lib/ -lfreenect2

INCLUDEPATH += $$PWD/libfreenect2/include/libfreenect2
DEPENDPATH += $$PWD/libfreenect2/include/libfreenect2

INCLUDEPATH += $$PWD/libfreenect2/src

unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += opencv
