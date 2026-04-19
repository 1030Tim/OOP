// Comp.cpp
#include<iostream>
#include "Comp.h"

Comp::Comp(double _real,double _image){
    this->real = _real;
    this->image = _image;
}
void Comp::setData(double _real, double _image){
    this->real = _real;
    this->image = _image;
}
void Comp::print() const{
    std::cout << "<" << this->real << ", " 
              << this->image << "i>\n";
}