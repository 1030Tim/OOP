#include<iostream>
#include "Point.h"

Point::Point(int _x, int _y){
    this->x = _x; // 確保賦值不會出錯
    this->y = _y;
}
void Point::setXY(int _x, int _y){
    this->x = _x;
    this->y = _y;
}
void Point::print() const{
    std::cout << x << " " << y << std::endl;
}