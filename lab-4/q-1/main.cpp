#include<iostream>
#include "vector.h"

int main()
{
    Vector V1(2,-8,4);
    V1.print();
    -V1;
    V1.print();
    return 0;
}