// Member.cpp
#include<iostream>
#include<string>
#include "Member.h"
Member::Member(std::string name, double height, double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;
}
bool Member::setName(std::string name){
    if (name.size()<=10){ // 如果name <= 10
        this->name = name;
        return true;
    }
    return false;
}
bool Member::setHeight(double height){
    if (height > 0 && height < 300){
        this->height = height;
        return true;
    }
    return false;
}
bool Member::setWeight(double weight){
    if (weight > 0 && weight < 800){
        this->weight = weight;
        return true;
    }
    return false;
}
void Member::print(){
    std::cout << name << " " 
              << height << " "
              << weight << std::endl;
}