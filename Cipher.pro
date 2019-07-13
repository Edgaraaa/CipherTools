#-------------------------------------------------
#
# Project created by QtCreator 2019-05-28T18:04:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cipher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    base_64.cpp \
    bacon.cpp \
    rail.cpp \
    casor.cpp

HEADERS  += mainwindow.h \
    base_64.h \
    bacon.h \
    rail.h \
    casor.h

FORMS    += mainwindow.ui

RESOURCES += \
    tupian.qrc
