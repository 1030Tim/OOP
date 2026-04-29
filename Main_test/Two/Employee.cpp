// Employee.cpp
#include<iostream>
#include<string>
#include "Employee.h"

void Employee::setData(std::string name, int salary){
    this->name = name;
    this->salary = salary;
}
void Employee::print() const{
    std::cout << this->name << " " << this->salary << std::endl;
}