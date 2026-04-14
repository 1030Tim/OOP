#ifndef FRUIT_H
#define FRUIT_H
#include<iostream>
#include<string>



class Fruit{
    private:
        std::string name;
        int price;
    public:
        void setName(std::string _name);
        void setPrice(int _price);
        std::string getName();
        int getPrice();
};


#endif