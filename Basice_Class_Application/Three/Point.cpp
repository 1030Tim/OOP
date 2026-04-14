#include<iostream>
#include<string>
#include "Point.h"

void Point::setPid(std::string pid){
    this->pid = pid;
}
void Point::setXY(int x, int y){
    this->x = x;
    this->y = y;
}
void Point::print(){
    std::cout << "<" << x << ", " << y << ">\n";
}