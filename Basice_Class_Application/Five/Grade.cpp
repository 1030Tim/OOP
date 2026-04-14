#include<iostream>
#include<string>
#include "Grade.h"

void Grade::setGrade(std::string studId, double eng, double math){
    this->studId = studId;
    this->eng = eng;
    this->math = math;
}
void Grade::print(){
    std::cout << studId << " " << eng << " "
              << math << " " << (double)((eng+math)/2.0) << std::endl;
}