// main.cpp
#include<iostream>
#include "Triangle.h"
using namespace std;
int main(void){
    Triangle t1,t2(10),t3(20,40),t4;
    double width,height;
    cin >> width >> height;
    t4.setHeight(height);
    t4.setWidth(width);
    t1.print();
    t2.print();
    t3.print();
    t4.print();
    return 0;
}