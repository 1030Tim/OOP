#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<string>
class Point{
    private:
        std::string pid;
        int x;
        int y;
    public:
        void setPid(std::string pid);
        void setXY(int x, int y);
        void print();
};
#endif