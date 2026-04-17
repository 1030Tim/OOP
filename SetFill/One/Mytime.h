// MyTime.h
#ifndef MYTIME_H
#define MYTIME_H

class MyTime{
    private:
        int h,m,s;
    public:
        MyTime();
        void setTime(int h, int m, int s);
        void print();
};
#endif