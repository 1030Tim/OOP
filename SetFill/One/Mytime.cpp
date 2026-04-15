#include<iostream>
#include<iomanip>
#include "Mytime.h"

Mytime::Mytime(){
    this->h = 0;
    this->m = 0;
    this->s = 0;
}
void Mytime::setTime(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}
void Mytime::print(){
    std::cout << std::setfill('0') 
              << std::setw(2) << h << ":"
              << std::setw(2) << m << ":"
              << std::setw(2) << s << std::endl;
}