#include <iostream>
#include "polygon.h"
#include "rectangle.h"
//function to know whether the polygon is rectangle or not
bool rectangle:: isRectangle()
{
	
	double w, x,y,z;
	
	w = a[0].distance(a[1]);
	x = a[1].distance(a[2]);
	y = a[2].distance(a[3]);
	z = a[3].distance(a[0]);
	if(w==x==y==z || w != x !=y!=z)
	{
		return false;
	}
	
	
	else if(w == y && x ==z)

	{
		std::cout <<true;
		return true;}
	else
	{
		return false;
	}
	
}