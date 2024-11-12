#ifndef ADDITION_H
#define ADDITION_H

#include "Calculator.h"

class Addition : public Calculator {
public:
    double calculate(double a, double b) override;
};

#endif
