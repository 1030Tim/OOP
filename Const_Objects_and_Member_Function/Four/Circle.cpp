// Ciricle.cpp
#include<iostream>
#include "Circle.h"

Circle::Circle(const int _id, double _radius):id(_id),radius(_radius){}

void Circle::setRadius(double _radius){
    this->radius = _radius;
}
void Circle::print() const{
    std::cout << id << " " << radius << std::endl;
}