// Student.cpp
#include<iostream>
#include<string>
#include "Student.h"

Student& Student::setSid(std::string _sid){
    this->sid = _sid;
    return *this;
}
Student& Student::setName(std::string _name){
    this->name = _name;
    return *this;
}
void Student::print(){
    std::cout << sid << " " << name << std::endl;
}