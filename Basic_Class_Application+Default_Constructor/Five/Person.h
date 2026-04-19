// Person.h
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
class Person{
    private:
        std::string name;
        double height;
        double weight;
    public:
        Person(std::string name = "none", double height = 150, double weight = 40);
        void setName(std::string _name);
        void setHeight(double _height);
        void setWeight(double _weight);
        void print();
};
#endif