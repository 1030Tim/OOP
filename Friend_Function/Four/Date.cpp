#include<iostream>
#include "Date.h"


Date::Date(int _year, int _month, int _day):year(_year),month(_month),day(_day){}

void printDate(const Date &date){
    std::cout << date.year << " " << date.month << " " << date.day << std::endl;
}