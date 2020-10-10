
#include "polygon.h"
#include "triangle.h"
 	
bool triangle::isTriangle()
{

	double x ,y ,z;
	x = a[0].distance(a[1]);
	y=a[1].distance(a[2]);
	z = a[2].distance(a[0]);
	
	if((x+y)>z && (y+z)>x && (z+x)>y)
	{
        return true;
	}
	else
	{
		return false;
	}
}