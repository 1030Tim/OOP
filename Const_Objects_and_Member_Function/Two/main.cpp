// main.cpp
#include<iostream>
#include "Point.h"
using namespace std;

int main(void){
    const Point p1(1,2);
    Point p2(0,0);
    int x,y;
    cin >> x >> y;
    p2.setXY(x,y);
    p1.print();
    p2.print();
    return 0;
}