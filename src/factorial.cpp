//
// Created by root on 11/11/19.
//

#include "factorial.h"


unsigned int Factorial( unsigned int number ) {
    return number > 1 ? Factorial(number-1)*number : 1;
}