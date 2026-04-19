// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    private:
        double real,image;
    public:
        Complex(double real = 1.0, double image = 0.0);
        void setReal(double _real);
        void setImage(double _image);
        void print();
};

#endif