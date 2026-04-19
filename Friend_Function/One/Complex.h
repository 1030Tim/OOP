// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    private:
        double real,image;
    public:
        Complex(double _real, double _image);

        friend void printComplex(const Complex &c);
};
#endif