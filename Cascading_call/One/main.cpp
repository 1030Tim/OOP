#include<iostream>
#include "Rect.h"
using namespace std;

int main(void){
    Rect r1,r2;
    r1.setLength(1).setWidth(2).print();
    r2.setWidth(5).print();
    return 0;
}