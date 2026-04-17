// main.cpp
#include<iostream>
#include<string>
#include<iomanip>
#include "MyDate.h"
using namespace std;

int main(void){
    MyDate date1;
    date1.print();
    int year,month,day;
    // input three values
    cin >> year >> month >> day;
    date1.setDate(year,month,day);
    date1.print();
    return 0;
}