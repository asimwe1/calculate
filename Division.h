#ifndef DIVISION_H
#define DIVISION_H

#include "Calculator.h"

class Division : public Calculator {
public:
    double calculate(double a, double b) override;
};

#endif
