// Fruit.cpp
#include<iostream>
#include<string>
#include "Fruit.h"

Fruit::Fruit(std::string _name, int _amount):name(_name),amount(_amount){}
void Fruit::print() const{
    std::cout << name << ":" << amount << std::endl;
}

void sellFruit(Fruit &f,const int num){
    f.amount = f.amount-num;
}