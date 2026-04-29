// Game.h
#ifndef GAME_H
#define GAME_H
#include<string>

class Game{
    private:
        std::string title;
        short year;
    public:
        Game(std::string title, short year);
        void print() const;
};

#endif