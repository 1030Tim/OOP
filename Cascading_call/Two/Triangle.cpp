// Triangle.h
#include<iostream>
#include<iomanip>
#include "Triangle.h"

Triangle& Triangle::setBase(double _base){
    this->base = _base;
    return *this; // 要串接所以傳回物件本身 
}
Triangle& Triangle::setHeight(double _height){
    this->height = _height;
    return *this;
}
void Triangle::print(){
    std::cout  << base << " " << height << std::endl;
            
}