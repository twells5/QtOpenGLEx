#-------------------------------------------------
#
# Project created by QtCreator 2016-06-03T18:21:52
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyOpenGL
TEMPLATE = app


SOURCES += main.cpp\
        window.cpp \
    myglwidget.cpp

HEADERS  += window.h \
    myglwidget.h

FORMS    += window.ui
