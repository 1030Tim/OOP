#include<iostream>
#include "Rect.h"

Rect& Rect::setLength(double _length){
    this->length = _length;
    return *this;
}
Rect& Rect::setWidth(double _width){
    this->width = _width;
    return *this;
}
void Rect::print(){
    std::cout << length << " " << width << std::endl;
}