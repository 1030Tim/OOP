// main.cpp
#include<iostream>
#include "Complex.h"
using namespace std;

int main(void){
    Complex c1,c2(2),c3(3,6),c4;
    double real,image;
    cin >> real >> image;
    c4.setReal(real);
    c4.setImage(image);
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    return 0;
}