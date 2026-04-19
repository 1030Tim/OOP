// Comp.h
#ifndef COMP_H
#define COMP_H

class Comp{
    private:
        double real,image;
    public:
        Comp(double _real,double _image);
        void setData(double _real, double _image);
        void print() const;
};
#endif