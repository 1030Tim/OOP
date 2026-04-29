// main.cpp
#include<iostream>
#include "Ball.h"
using namespace std;

int main(void){
    cout << Ball::PI << endl;
    Ball b1(12,100);
    b1.print();
    return 0;
}