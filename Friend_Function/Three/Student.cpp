// Student.cpp
#include<iostream>
#include<string>
#include "Student.h"

Student::Student(std::string _sid, int _grade):sid(_sid),grade(_grade){}
void Student::print() const{
    std::cout << sid << " " << grade << std::endl;
}

void modifyGrade(Student &s, const int newGrade){
    s.grade = newGrade;
}