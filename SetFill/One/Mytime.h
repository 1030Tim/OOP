#ifndef MYTIME_H
#define MYTIME_H
#include<iostream>

class Mytime{
    private:
        int h,m,s;
    public:
        Mytime();
        void setTime(int h, int m, int s);
        void print();
};

#endif