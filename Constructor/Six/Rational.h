// Rational.h
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
    private:
        int num,denom;
    public:
        Rational(int num, int denom);
        void setNum(int num);
        void setDenom(int denom);
        void print() const;
};
#endif