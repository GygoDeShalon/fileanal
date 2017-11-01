#-------------------------------------------------
#
# Project created by QtCreator 2017-11-01T10:46:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kali
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    pfile.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    pfile.h

FORMS    += mainwindow.ui \
    dialog.ui \
    pfile.ui
