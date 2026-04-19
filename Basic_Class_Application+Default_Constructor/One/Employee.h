// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>


class Employee{
    private:
        std::string name;
        int dept;
    public:
        Employee(std::string name = "", int dept = 0);
        void setName(std::string name);
        void setDept(int dept);
        void print();
};

#endif