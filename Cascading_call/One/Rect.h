// Rect.h
#ifndef RECT_H
#define RECT_H

class Rect{
    private:
        double length, width;
    public:
        Rect& setLength(double _length);
        Rect& setWidth(double _width);
        void print();
};

#endif