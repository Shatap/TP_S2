TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra
SOURCES += main.cpp \
    Univers.cpp \
    Endroit.cpp \
    Objet.cpp \
    Personnage.cpp \
    utilitaires.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Univers.h \
    Endroit.h \
    Objet.h \
    Personnage.h \
    utilitaires.h

OTHER_FILES += \
    exemple1.txt \
    exemple2.txt

