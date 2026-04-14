// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
class Product{
    private:
        std::string pid,name;
        int amount;
    public:
        Product(std::string pid, std::string name, int amount);
        void setPid(std::string pid);
        void setName(std::string name);
        void setAmount(int amount);
        void print() const;
};
#endif