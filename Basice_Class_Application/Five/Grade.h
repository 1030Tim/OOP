#ifndef GRADE_H
#define GRADE_H
#include<iostream>
#include<string>

class Grade{
    private:
        std::string studId;
        double eng;
        double math;
    public:
        void setGrade(std::string , double , double );
        void print();
};

#endif