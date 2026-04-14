// Product.cpp
#include<iostream>
#include<string>
#include "Product.h"
Product::Product(std::string pid, std::string name, int amount){
    this->pid = pid;
    this->name = name;
    this->amount = amount;
}
void Product::setPid(std::string pid){
    this->pid = pid;
}
void Product::setName(std::string name){
    this->name = name;
}
void Product::setAmount(int amount){
    this->amount = amount;
}
void Product::print() const{
    std::cout << this->pid << " " 
              << this->name << " "
              << this->amount << "\n";
}