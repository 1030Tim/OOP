// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>

class Employee{
    private:
        std::string name;
        int salary;
    public:
        void setData(std::string name, int salary);
        void print() const;
};
#endif