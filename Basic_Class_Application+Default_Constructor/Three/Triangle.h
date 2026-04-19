// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    private:
        double width,height;
    public:
        Triangle(double width = 3, double height = 4);
        void setWidth(double _width);
        void setHeight(double _height);
        void print();
};

#endif