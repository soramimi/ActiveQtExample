#-------------------------------------------------
#
# Project created by QtCreator 2015-11-30T16:31:37
#
#-------------------------------------------------

QT       += core gui widgets axcontainer

TARGET = MyApp
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += MainWindow.h

FORMS    += MainWindow.ui

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
