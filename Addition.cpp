#include "Addition.h"
#include<iostream>
#include<ctype.h>

double Addition::calculate(double a, double b){
    if (isdigit(a)==false || isdigit(b)==false){
        return a+b;

    }
    return 0;
}
