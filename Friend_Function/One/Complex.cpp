// Complex.cpp
#include<iostream>
#include "Complex.h"

Complex::Complex(double _real, double _image): real(_real),image(_image){}

void printComplex(const Complex &c){
    std::cout << "<" << c.real << ", " << c.image << "i>" << std::endl;
 }