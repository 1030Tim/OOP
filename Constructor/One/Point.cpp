#include<iostream>
#include "Point.h"

Point::Point(){
    // 選擇this->寫法保證是指向x
    this->x = 1;
    this->y = 2;
}
void Point::setXY(int x, int y){
    this->x = x;
    this->y = y;
}
void Point::print(){
    std::cout << "<" << x << ", " << y << ">\n";
}