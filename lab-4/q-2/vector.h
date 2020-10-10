#pragma once
#include<iostream>

class Vector{
   
        double r1;
        double r2;
        double r3;
    public:
        Vector ()
            :Vector{0,0,0}{};

        Vector (double a, double b, double c)
            :r1{a},r2{b},r3{c} {               
        }

        Vector operator+(const Vector &);
        Vector operator-(const Vector &);
        Vector operator*(const Vector &);
        
        void operator+=(const Vector &);
        bool operator==(const Vector &);
        bool operator>(const Vector &);
        friend std::ostream& operator<<(std::ostream &out, const Vector &v);
        friend std::istream& operator>>(std::istream &in, Vector &v);
};