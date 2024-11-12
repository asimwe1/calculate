#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "Calculator.h"

class Subtraction : public Calculator {
public:
    double calculate(double a, double b) override;
};

#endif
