 
#include <cmath>
#include "point.h"
void point::setpoint(double a , double b)
{
    this->x=a;
    this->y=b;
}
//function that returns the distance 
double point:: distance(point& reference)
{
    point temp;
    temp.x =pow((reference.x -x),2);
    temp.y = pow((reference.y -y),2);
    return (sqrt(temp.x+temp.y));
}