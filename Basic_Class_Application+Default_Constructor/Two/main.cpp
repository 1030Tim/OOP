// main.cpp
#include<iostream>
#include "SensorValue.h"
using namespace std;

int main(void){
    SensorValue s1,s3,s2(5);
    double value;
    cin >> value;
    s3.setValue(value);
    // 超過10萬會自動用科學符號表示double特質
    s1.print();
    s2.print();
    s3.print();
}