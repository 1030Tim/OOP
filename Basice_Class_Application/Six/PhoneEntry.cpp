#include<iostream>
#include<string>
#include "PhoneEntry.h"

void Phoneentry::setName(std::string _name){
    this->name = _name;
}
void Phoneentry::setTel(std::string _tel){
    this->tel = _tel;
}
void Phoneentry::print(){
    std::cout << name << " " << tel << std::endl;
}