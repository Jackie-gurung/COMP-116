#include<iostream>
#include "triangle.h"
#include "rectangle.h"
using namespace std;

int main()
{
	
	triangle a;
	a.setvertices(3);

	cout << "Enter the coodinates of a triangle"  << endl;
	a.setcoordinates();

	while (!a.isTriangle())
	{
	    cout << "They are not the coodinates of a triangle. Kindly enter the coordinates again"  << endl;
	    a.setcoordinates();
	}	
	cout << "Coordinates of the triangle are:"  << endl;
	a.displaycoordinates();

	cout << "Centroid is:"<<endl;
	a.centroidx();

	cout << "MOVING TRIANGLE BY (1,1)"<<endl;
	a.move(1,1);
	a.displaycoordinates();
	
	cout << "New Centroid is:"<<endl;
	a.centroidx();
	
	
	rectangle b;
	b.setvertices(4);

	cout << "Enter the coodinates of a rectangle"  << endl;
	b.setcoordinates();
    
	while(!b.isRectangle())
	{
	cout << "They are not the coodinates of a rectangle. Kindly enter the coordinates again"  << endl;
	b.setcoordinates();
	}

	cout << "Coordinates of the rectangle are:"  << endl;
	b.displaycoordinates();

	cout << "Centroid is:"<<endl;
	b.centroidx();

	cout << "MOVING Rectangle BY (1,1)"<<endl;
	b.move(1,1);
	b.displaycoordinates();
	
	cout << "New Centroid is:"<<endl;
	b.centroidx();

}