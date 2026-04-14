#include<iostream>
#include "Point.h"
using namespace std;

// main(void)傳統寫法
int main(void){
    Point Pt1;
    Pt1.print();
    int x,y;
    cin >> x >> y;
    Pt1.setXY(x,y);
    Pt1.print();
    return 0;
}