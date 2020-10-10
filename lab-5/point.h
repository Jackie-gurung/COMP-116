#pragma once
class point {
   public:
    double x,y;
    void setpoint (double ,double);
    double getx(){return x;}
	double gety(){return y;}
    double distance (point &);
};