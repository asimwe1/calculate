TEMPLATE = app
TARGET = calculate

QT += core gui widgets

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

HEADERS += \
    Addition.h \
    Calculator.h \
    CalculatorUI.h \
    Division.h \
    Multiplication.h \
    Subtraction.h

SOURCES += \
    CalculatorUI.cpp \
    main.cpp