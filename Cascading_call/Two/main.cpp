// main.cpp
#include<iostream>
#include "Triangle.h"
using namespace std;

int main(void){
    Triangle t1,t2;
    t1.setBase(10).setHeight(20).print();
    t2.setBase(40).print();
    return 0;
}