#include<iostream>
#include<string>
#include "Fruit.h"

void Fruit::setName(std::string _name){
    this->name = _name;
}
void Fruit::setPrice(int _price){
    this->price = _price;
}
std::string Fruit::getName(){
    return name;
}
int Fruit::getPrice(){
    return price;
}