// ComplexNumber.cpp
#include<iostream>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(int real, int image){
    this->real = real;
    this->image = image;
}
void ComplexNumber::setComp(int real, int image){
    this->real = real;
    this->image = image;
}
void ComplexNumber::print() const{
    std::cout << "<" << this->real 
              << ", " << this->image 
              << "i>" << std::endl;
}

