// Person.h
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>

class Person{
    private:
        std::string name;
        const int birthYear;
    public:
        Person(std::string _name, const int _birthYear);
        void print();     // 沒要求格式
};

#endif 