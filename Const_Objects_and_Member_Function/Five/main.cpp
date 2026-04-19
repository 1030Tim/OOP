// main.cpp
#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

int main(void){
    Student s1("John",10);
    const Student s2("Joe",15);
    s1.setDept(24);
    s1.print();
    s2.print();
    return 0;
}