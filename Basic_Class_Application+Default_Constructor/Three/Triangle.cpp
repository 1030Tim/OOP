// Triangle.cpp
#include<iostream>
#include "Triangle.h"

Triangle::Triangle(double _width, double _height){
    this->width = _width;
    this->height = _height;
}
void Triangle::setWidth(double _width){
    this->width = _width;
}
void Triangle::setHeight(double _height){
    this->height = _height;
}
void Triangle::print(){
    std::cout << this->width << " " 
              << this->height << std::endl;
}