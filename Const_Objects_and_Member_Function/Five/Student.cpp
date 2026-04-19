// Student.cpp
#include<iostream>
#include<string>
#include "Student.h"

Student::Student(const std::string _sid, int _dept):sid(_sid),dept(_dept){}
void Student::setDept(int _dept){
    this->dept = _dept;
}
void Student::print() const{
    std::cout << sid << " " << dept << std::endl;
}