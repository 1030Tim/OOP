//main.cpp
#include<iostream>
#include "Point3D.h"
using namespace std;
int main(void){
    Point3D p1(1,2,3);
    Point3D p2(4,5,6);
    p1.print();
    p2.print();
    int x,y,z;
    cin >> x >> y >> z;
    p2.SetXYZ(x,y,z);
    p1.print();
    p2.print();
    return 0;
}