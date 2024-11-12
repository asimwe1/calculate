#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Calculator.h"

class Multiplication : public Calculator {
public:
    double calculate(double a, double b) override;
};

#endif
