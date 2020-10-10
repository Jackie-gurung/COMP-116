#pragma once 
#include "point.h"

class polygon{
    public:
	    int  numberofvertices;
        point a[4];
  
	    void setvertices(int);
    
        void setcoordinates();
        void centroidx();
        void move(double x1 , double y1);
        void displaycoordinates();
		
};