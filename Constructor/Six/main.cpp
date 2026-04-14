// main.cpp

#include<iostream>
#include "Rational.h"
using namespace std;

int main(void){
    Rational r1(1,2);
    Rational r2(3,4);
    r1.print();
    r2.print();
    r2.setNum(5);
    r2.setDenom(6);
    r1.print();
    r2.print();
    return 0;
}