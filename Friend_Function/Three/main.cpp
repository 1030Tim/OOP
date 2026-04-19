// main.cpp
#include<iostream>
#include<string>
#include "Student.h"

int main(void){
    Student s1("99000001",88);
    s1.print();
    modifyGrade(s1,95);
    s1.print();
    return 0;
}