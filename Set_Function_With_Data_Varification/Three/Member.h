// Member.h
#ifndef MEMBER_H
#define MEMBER_H
#include<iostream>
#include<string>
class Member{
    private:
        std::string name;
        double height;
        double weight;
    public:
        Member(std::string name, double height, double weight);
        bool setName(std::string name);
        bool setHeight(double height);
        bool setWeight(double weight);
        void print();
};
#endif