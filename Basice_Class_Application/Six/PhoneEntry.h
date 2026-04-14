#ifndef PHONEENTRY_H
#define PHONEENTRY_H
#include<iostream>
#include<string>

class Phoneentry{
    private:
        std::string name;
        std::string tel;
    public:
        void setName(std::string _name);
        void setTel(std::string _tel);
        void print();
};



#endif