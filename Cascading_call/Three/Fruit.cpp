// Fruit.cpp
#include<iostream>
#include<string>
#include "Fruit.h"

Fruit& Fruit::setName(std::string _name){
    this->name = _name;
    return *this;
}
Fruit& Fruit::setAmount(int _amount){
    this->amount = _amount;
    return *this;
}
void Fruit::print(){
    std::cout << name << " " << amount << std::endl;
}