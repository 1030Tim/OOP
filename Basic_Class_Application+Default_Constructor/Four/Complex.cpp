// Complex.cpp
#include<iostream>
#include "Complex.h"

Complex::Complex(double _real, double _image){
    this->real = _real;
    this->image = _image;
}
void Complex::setReal(double _real){
    this->real = _real;
}
void Complex::setImage(double _image){
    this->image = _image;
}
void Complex::print(){
    std::cout << "<" << this->real << ","
             << this->image << "i>\n";
}