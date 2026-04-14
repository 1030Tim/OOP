// main.cpp
#include<iostream>
#include "ComplexNumber.h"
using namespace std;

int main(void){
    ComplexNumber c1(1,2);
    ComplexNumber c2(0,0);
    c2.setComp(3,4);
    c1.print();
    c2.print();
    return 0;
}