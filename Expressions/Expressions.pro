TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra
SOURCES += main.cpp \
    TokenReader.cpp \
    ExceptionUnexpectedChar.cpp \
    Evaluator.cpp \
    ExceptionSyntaxError.cpp \
    Token.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    TokenReader.h \
    ExceptionUnexpectedChar.h \
    Evaluator.h \
    ExceptionSyntaxError.h \
    Token.h

