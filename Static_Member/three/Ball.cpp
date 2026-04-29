// Ball.cpp
#include<iostream>
#include "Ball.h"


const double Ball::PI = 3.14159;
Ball::Ball(int _id, double _radius){
    this->id = _id;
    this->radius = _radius;
}
void Ball::print(){
    std::cout << id << " " << radius << std::endl;
}

       