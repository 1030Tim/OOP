#ifndef POINT_H
#define POINT_H

class Point{
    private:
        int x,y;
    public:
       Point();
       void setXY(int x, int y);
       void print() const; 
};
#endif