// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
        const int id;
        double radius;
    public:
        Circle(const int _id, double _radius);
        void setRadius(double _radius);
        void print() const;
};
// 沒改值盡量加const但有參數有const this->不能用
#endif
