#-------------------------------------------------
#
# Project created by QtCreator 2015-11-30T16:19:01
#
#-------------------------------------------------

QT       += core gui widgets axserver

TARGET = MyControl
TEMPLATE = lib
CONFIG += dll

SOURCES += main.cpp\
        MyControl.cpp \
    ContentFrame.cpp

HEADERS  += MyControl.h \
    ContentFrame.h

FORMS    += MyControl.ui

DEF_FILE = MyControl.def

Release:DESTDIR=$$PWD/../build/release
Debug::DESTDIR=$$PWD/../build/release

Release:OBJECTS_DIR=$$PWD/build/release
Release:MOC_DIR=$$PWD/build/release
Release:RCC_DIR=$$PWD/build/release
Release:UI_DIR=$$PWD/build/release

Debug:OBJECTS_DIR=$$PWD/build/debug
Debug:MOC_DIR=$$PWD/build/debug
Debug:RCC_DIR=$$PWD/build/debug
Debug:UI_DIR=$$PWD/build/debug

RESOURCES += \
    resources.qrc
