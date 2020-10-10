#include<iostream>
#include"vector.h"

Vector Vector::operator+(const Vector &v1){
    Vector v;
    v.r1 = this->r1 + v1.r1;
    v.r2 = this->r2 + v1.r2;
    v.r3 = this->r3 + v1.r3;
    return v;
}

Vector Vector::operator-(const Vector &v1){
    Vector v;
    v.r1 = this->r1 - v1.r1;
    v.r2 = this->r2 - v1.r2;
    v.r3 = this->r3 - v1.r3;
    return v;
}

Vector Vector::operator*(const Vector &v1){
    Vector v;
    v.r1 = this->r1 * v1.r1;
    v.r2 = this->r2 * v1.r2;
    v.r3 = this->r3 * v1.r3;
    return v;
}

void Vector::operator+=(const Vector &v){
    this->r1 += v.r1;
    this->r2 += v.r2;
    this->r3 += v.r3;
}

bool Vector::operator==(const Vector &v){
    if(this->r1 == v.r1 && this->r2 == v.r2 && this-> r3== v.r3){
        return 1;
    }else{
        return 0;
    }
}

bool Vector::operator>(const Vector &v){
    if(this->r1 > v.r1 && this->r2 > v.r2 && this-> r3 > v.r3){
        return 1;
    }else{
        return 0;
    }
}

std::ostream& operator<<(std::ostream &out, const Vector &v){
    return out << "Vector    " << "[ " << v.r1 << " , " << v.r2 << " , " << v.r3 << " ]" << std::endl;
}

std::istream& operator>>(std::istream &in,Vector &v){
    return in >> v.r1 >> v.r2 >> v.r3;
}


