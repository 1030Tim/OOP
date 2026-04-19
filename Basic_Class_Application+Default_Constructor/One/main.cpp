// main.cpp
#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;

int main(void){
    Employee e1;
    Employee e2("Jony");
    Employee e3("Steven",300);
    Employee e4;
    string name;
    int dept;
    cin >> name >> dept;
    e4.setName(name);
    e4.setDept(dept);
    e1.print();
    e2.print();
    e3.print();
    e4.print();
    return 0;
}