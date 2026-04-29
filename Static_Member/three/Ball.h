// Ball.h
#ifndef BALL_H
#define BALL_H

class Ball{
    private:
        int id;
        double radius;
    public:
        Ball(int _id, double _radius);
        void print();

        static const double PI;
};

#endif