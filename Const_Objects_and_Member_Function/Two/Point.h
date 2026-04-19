// Point.h
#ifndef POINT_H
#define POINT_H

class Point{
    protected:
        int x,y;
    public:
        Point(int _x, int _y);//題目沒說有預設值
        void setXY(int _x, int _y);
        void print() const;//無格式限定
};

#endif