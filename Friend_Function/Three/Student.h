// Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

class Student{
    private:
        std::string sid;
        int grade;
    public:
        Student(std::string _sid, int _grade);
        void print() const;

        friend void modifyGrade(Student &s, const int newGrade);
};

#endif