#include "vector.h"
#include<iostream>



void Vector::operator-(){
    r1 = -r1,
    r2 = -r2,
    r3 = -r3;
}

void Vector::print(){
    std::cout << "Vector    " << "[ " << r1 << " , " << r2 << " , " << r3 << " ]" << std::endl;
}

