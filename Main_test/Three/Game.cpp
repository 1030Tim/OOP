// Game.cpp
#include<iostream>
#include<string>
#include "Game.h"

Game::Game(std::string title, short year):title(title),year(year){}
void Game::print() const{
    std::cout << this->title << " " << this->year << std::endl;
}