#include<iostream>
#include "MyData.h"

void MyData::setData(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}
void MyData::print(){
    std::cout << year << " " << month << " " << day << "\n";
}