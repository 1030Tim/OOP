// main.cpp
#include<iostream>
#include "MyTime.h"
using namespace std;

int main(void){
    MyTime t1;
    t1.print();
    int h,m,s;
    // enter the h , m , s
    cin >> h >> m >> s;
    t1.setTime(h,m,s);
    t1.print();
    return 0;
}