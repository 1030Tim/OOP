// MyTime.cpp
#include<iostream>
#include<iomanip>
#include "MyTime.h"

MyTime::MyTime(){
    this->h = 0;
    this->m = 0;
    this->s = 0;
}
void MyTime::setTime(int _h, int _m, int _s){
    this->h = _h;
    this->m = _m;
    this->s = _s;
}
void MyTime::print(){
    std::cout << std::setfill('0') 
              << std::setw(2) << this->h << ":"
              << std::setw(2) << this->m << ":"
              << std::setw(2) << this->s << std::endl;
}