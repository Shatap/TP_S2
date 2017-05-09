TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra
SOURCES += main.cpp \
    notesexamen.cpp \
    erreurcandidatdejaenregistre.cpp \
    erreurnoteinvalide.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    notesexamen.h \
    erreurcandidatdejaenregistre.h \
    erreurnoteinvalide.h

