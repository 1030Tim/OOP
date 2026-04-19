// Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

class Student{
    private:
        const std::string  sid;
        int dept;
    public:
        Student(const std::string _sid, int dept);
        void setDept(int _dept);
        void print() const;
};

#endif