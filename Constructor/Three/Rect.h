#ifndef RECT_H
#define RECT_H
class Rect{
    private:
        int lenght;
        int wedth;
    public:
        Rect();
        int area();
        void setSize(int lenght, int wedth);
        void print();
};
#endif