#include <iostream>
#include "polygon.h"

using namespace std;

    void  polygon::setvertices(int a)
	{
		this->numberofvertices = a;
	}

		
	void polygon::setcoordinates()
	{
		for(int i =0 ;i<numberofvertices ; i++)
		{
			cout<< "Enter the x- coordinate of " << i+1 << " point" <<endl;
			cin >> a[i].x;
			cout<< "Enter the y- coordinate of " << i+1 << " point" <<endl;
			cin>> a[i].y;
		}
	}
	
	void polygon::centroidx()
	{
        double x{0},y{0};

        for(int i =0 ;i<numberofvertices ; i++)
            {
                x += a[i].x;
                y += a[i].y;
            }

            x=x/numberofvertices;
            y=y/numberofvertices;
            point z;
            z.setpoint(x,y);			
            cout <<"(" << z.getx()<<","<<z.gety() <<")"<<endl;
	}
		
	void polygon::move(double x1 , double y1)
		{
			for(int i =0 ;i<numberofvertices ; i++)
			{
				this ->a[i].x += x1;
				this->a[i].y += y1;
			}
		}
		
	void polygon::displaycoordinates()
		{
				for(int i =0 ;i<numberofvertices ; i++)
			{
				cout << "(" << a[i].x <<"," << a[i].y <<")" << endl;

			}
		}