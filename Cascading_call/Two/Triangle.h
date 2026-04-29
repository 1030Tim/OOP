#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    private:
        double base,height;
    public:
        Triangle& setBase(double _base);
        Triangle& setHeight(double _height);
        void print();
};


#endif