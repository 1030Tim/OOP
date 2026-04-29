// main.cpp
#include<iostream>
#include<string>
#include "Game.h"
using namespace std;
int main(void){
    Game game1("The Legend of Zelda", 2017);
    Game game2("God of War", 2022);
    game1.print();
    game2.print();
    return 0;
}