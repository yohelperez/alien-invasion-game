#-------------------------------------------------
#
# Project created by QtCreator 2016-11-01T13:03:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ESFERAS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    esferagraf.cpp \
    esferasim.cpp \
    prot.cpp \
    invasion.cpp

HEADERS  += mainwindow.h \
    esferagraf.h \
    esferasim.h \
    prot.h \
    invasion.h

FORMS    += mainwindow.ui

RESOURCES += \
    imagen.qrc

DISTFILES +=
