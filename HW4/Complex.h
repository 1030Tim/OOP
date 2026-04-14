// 11424101
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<string>

class Complex{
    private:
        std::string id;
        int real;
        int image;

    public:
        Complex(std::string id = "A01", int real = 1, int image = 0);
        void sexId(std::string _id);
        void sexReal(int _real);
        void sexImage(int _image);
        void print();

};

#endif