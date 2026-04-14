#ifndef MEMBER_H
#define MEMBER_H
#include<iostream>
#include<string>

class Member{
    private:
        std::string med;
        int level;
    public:
        void setMed(std::string med);
        void setlevel(int level);
        std::string getMed();
        int getLevel();

};


#endif