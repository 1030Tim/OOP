// ComplexNumber.h
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber{
    private:
        double real,image;
    public:
        ComplexNumber(int real, int image);
        void setComp(int real, int image);
        void print() const;
};

#endif