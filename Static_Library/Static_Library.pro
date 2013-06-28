#-------------------------------------------------
#
# Project created by QtCreator 2013-06-28T04:56:31
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Static_Library
CONFIG   += console
CONFIG   -= app_bundle
INCLUDEPATH += ./Header

LIBS += -L/home/harry/Programming/Qt/Basics/Static_Library/Static_Library/Lib -ltalk

TEMPLATE = app

SOURCES += main.cpp

HEADERS += Talk.h
