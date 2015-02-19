#-------------------------------------------------
#
# Project created by QtCreator 2013-11-08T07:23:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = program
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    methods.cpp \
    aboutdialog.cpp

HEADERS  += mainwindow.h \
    methods.h \
    aboutdialog.h

FORMS    += mainwindow.ui \
    aboutdialog.ui

RESOURCES += \
    program.qrc
