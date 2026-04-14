#include<iostream>
#include<string>
#include "Point.h"
using namespace std;

int main(){
    Point pt;
    string pid;
    int x,y;
    cin >> pid >> x >> y;
    pt.setPid(pid);
    pt.setXY(x,y);
    pt.print();
    return 0;
}