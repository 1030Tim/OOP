// Person.cpp
#include<iostream>
#include<string>
#include "Person.h"

Person::Person(std::string _name, double _height, double _weight){
    this->name = _name;
    this->height = _height;
    this->weight = _weight;
}
void Person::setName(std::string _name){
    this->name = _name;
}
void Person::setHeight(double _height){
    this->height = _height;
}
void Person::setWeight(double _weight){
    this->weight = _weight;
}
void Person::print(){
    std::cout << this->name << ","
              << this->height << ","
              << this->weight << std::endl;
}