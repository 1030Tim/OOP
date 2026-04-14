//Point3D.cpp
#include<iostream>
#include "Point3D.h"
Point3D::Point3D(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void Point3D::SetXYZ(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}
void Point3D::print() const {
    std::cout << "<" << this->x << "," 
              << this->y << "," 
              << this->z << ">\n";
}