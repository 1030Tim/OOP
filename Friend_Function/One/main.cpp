// main.cpp
#include<iostream>
#include "Complex.h"
using namespace std;

int main(void){
    Complex c1(1,2),c2(3,4);
    printComplex(c1);
    printComplex(c2);
    return 0;
}