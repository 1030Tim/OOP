#include<iostream>
#include<string>
#include "Member.h"


void Member::setMed(std::string med){
    this->med = med;
}
void Member::setlevel(int level){
    this->level = level;
}
std::string Member::getMed(){
    return med;
}
int Member::getLevel(){
    return level;
}