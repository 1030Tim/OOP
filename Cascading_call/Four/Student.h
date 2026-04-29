// Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

class Student{
    private:
        std::string sid, name;
    public:
        Student& setSid(std::string _sid);
        Student& setName(std::string _name);
        void print();
};

#endif 