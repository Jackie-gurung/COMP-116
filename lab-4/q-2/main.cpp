#include<iostream>
#include"vector.h"


int main()
{
    Vector  v1;
    std::cout << "Enter the elements of row/column 1 : "; 
    std::cin >> v1;
    Vector  v2;
    std::cout << "Enter the elements of row/column 2 : "; 
    std::cin >> v2;
    Vector  v3 = v1 + v2;
            std::cout << v3 <<std::endl;
            v3 = v1 - v2;
            std::cout << v3 <<std::endl;
            v3 = v1 * v2;
            std::cout << v3 <<std::endl;
            v3 += v1;
            std::cout << v3 <<std::endl;

            std::cout << std::boolalpha;
            std::cout << (v1 == v2) << std::endl;
            std::cout << (v1 > v2) << std::endl;
    
    return 0;
    
}