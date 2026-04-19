// main.cpp
#include<iostream>
#include "Circle.h"
using namespace std;

int main(void){
    Circle c1(0,100);
    const Circle c2(1,200); 
    c1.print();
    c2.print();
    c1.setRadius(40);
    c1.print();
    c2.print();
    return 0;

}