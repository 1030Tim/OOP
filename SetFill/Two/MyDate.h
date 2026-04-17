// MyDate.h
#ifndef MYDATE_H
#define MYDATE_H

class MyDate{
    private:
        int year,month,day;
    public:
        MyDate();
        void setDate(int year, int month, int day);
        void print();

};


#endif