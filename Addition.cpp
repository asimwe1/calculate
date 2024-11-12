#include "Addition.h"
#include<iostream>
#include<ctype.h>

double Addition::calculate(double a, double b){
    if (isdigit(a) || isdigit(b)){
        return a+b;

    }
    return 0;
}
