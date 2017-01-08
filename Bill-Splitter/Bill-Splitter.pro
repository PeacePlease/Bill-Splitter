#-------------------------------------------------
#
# Project created by QtCreator 2017-01-07T12:28:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bill-Splitter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imageprocessing.cpp

HEADERS  += \
    imageprocessing.hpp \
    mainwindow.hpp

FORMS    += mainwindow.ui

RESOURCES +=

LIBS += -L/usr/local/lib/ -ltesseract
LIBS += -llept
LIBS += -lpng -ltiff -ljpeg

OTHER_FILES += \
    Resources/IMG_0670.JPG
