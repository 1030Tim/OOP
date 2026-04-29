// main.cpp
#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
int main(void){
    Employee emp1;
    string name;
    int salary;
    cin >> name >> salary;
    emp1.setData(name,salary);
    emp1.print();
    return 0;
}