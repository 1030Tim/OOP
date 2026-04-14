// Grade.h
#ifndef GRADE_H
#define GRADE_H
#include<iostream>

class Grade{
    private:
        double chi;
        double eng;
    public:
        Grade();
        bool setChi(double chi);
        bool setEng(double eng);
        void print();
};


#endif