TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Appli.cpp \ 
    CircleSh.cpp

include(deployment.pri)
qtcAddDeployment()

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra
LIBS           += -lsfml-graphics -lsfml-window -lsfml-system

HEADERS += \
    Appli.h \ 
    CircleSh.h
