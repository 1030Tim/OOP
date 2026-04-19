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
        Fruit(std::string _name, int _amount);
        void print() const;

        friend void sellFruit (Fruit &f,const int num);
};

#endif