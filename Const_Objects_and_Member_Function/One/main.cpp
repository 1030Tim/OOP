// main.cpp
#include<iostream>
#include "Comp.h"
using namespace std;

int main(void){
    const Comp c1(1,2);
    Comp c2(0,0);
    double real,image;
    cin >> real >> image;
    c2.setData(real,image);
    c1.print();
    c2.print();
    return 0;
}