// MyDate.cpp
#include<iostream>
#include<iomanip>
#include "MyDate.h"

MyDate::MyDate(){
    this->year = 0;
    this->month = 0;
    this->day = 0;
}
void MyDate::setDate(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;   
}
void MyDate::print(){
    std::cout << std::setfill('0') 
              << std::setw(4) << year << "/"
              << std::setw(2) << month << "/"
              << std::setw(2) << day << std::endl;
}