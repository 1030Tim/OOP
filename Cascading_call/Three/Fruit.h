// Fruit.h
#ifndef FRUIT_H
#define FRUIT_H
#include<iostream>
#include<string>

class Fruit{
    private:
        std::string name;
        int amount;
    public:
        Fruit& setName(std::string _name);
        Fruit& setAmount(int _amount);
        void print();
};
#endif