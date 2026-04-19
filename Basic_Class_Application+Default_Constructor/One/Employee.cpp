// Employee.cpp
#include<iostream>
#include "Employee.h"

Employee::Employee(std::string _name, int _dept){
    this->name = _name;
    this->dept = _dept;
}
void Employee::setName(std::string _name){
    this->name = _name;
}
void Employee::setDept(int _dept){
    this->dept = _dept;
}
void Employee::print(){
    std::cout << this->name << " "
              << this->dept << std::endl;
}