TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra
SOURCES += main.cpp \
    Element.cpp \
    Text.cpp \
    Document.cpp \
    Node.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Element.h \
    Text.h \
    Document.h \
    Node.h

