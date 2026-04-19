// Person.cpp
#include<iostream>
#include<string>
#include "Person.h"

Person::Person(std::string _name, const int _birthYear):
                name(_name),
                birthYear(_birthYear){}


void Person::print(){
    std::cout << this->name << " " << this->birthYear << std::endl;
}