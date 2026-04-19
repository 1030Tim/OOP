#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int year,month,day;
    public:
        Date(int _year, int _month, int _day);

        friend void printDate(const Date &date);
};

#endif