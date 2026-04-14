// Watch.cpp
#include<iostream>
#include "Watch.h"

Watch::Watch(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}
bool Watch::setHour(int h){
    if (h >= 0 && h<=23){
        this->h = h;
        return true;
    }
    return false;
}
bool Watch::setMin(int m){
    if (m >= 0 && m <= 59){
        this->m = m;
        return true;
    }
    return false;
}
bool Watch::setSec(int s){
    if (s >= 0 && s <= 59){
        this->s = s;
        return true;
    }
    return false;
}
void Watch::print(){
    std::cout << this->h << " " << this->m << " " << this->s << "\n";
}