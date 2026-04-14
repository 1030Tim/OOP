// Rational.cpp
#include<iostream>
#include "Rational.h"

Rational::Rational(int num, int denom){
    this->num = num;
    this->denom = denom;
}
void Rational::setNum(int num){
    this->num = num;
}
void Rational::setDenom(int denom){
    this->denom = denom;
}
void Rational::print() const{
    std::cout << "<" << this->num
              << "/" << this->denom
              << ">\n";
}