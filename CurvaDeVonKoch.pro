#-------------------------------------------------
#
# Project created by QtCreator 2015-05-16T19:09:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CurvaDeVonKoch
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    DuLine.cpp \
    DuScene.cpp \
    DuUtil.cpp \
    DialDialog.cpp

HEADERS  += Widget.h \
    DuLine.h \
    DuScene.h \
    DuDefines.h \
    DuUtil.h \
    DialDialog.h

FORMS    += Widget.ui \
    DialDialog.ui

QMAKE_CXXFLAGS += -std=gnu++14
