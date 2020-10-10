#pragma once

class Vector{
    private:
        double r1;
        double r2;
        double r3;
        
    public:
        Vector ()
            :Vector{0,0,0}{};

        Vector (double a, double b, double c)
            :r1{a},r2{b},r3{c} {               
            }

        void operator-();
        void print();
};