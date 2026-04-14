// Watch.h
#ifndef WATCH_H
#define WATCH_H
class Watch{
    private:
        int h,m,s;
    public:
        Watch(int h, int m, int s);
        bool setHour(int h);
        bool setMin(int m);
        bool setSec(int s);
        void print();
};
#endif