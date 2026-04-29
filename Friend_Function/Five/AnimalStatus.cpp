// AnimalStatus.cpp
#include<iostream>
#include "AnimalStatus.h"


AnimalStatus::AnimalStatus(int _hp, int _mp):hp(_hp),mp(_mp){}

void showStatus(const AnimalStatus &animal){
    std::cout << animal.hp << " " << animal.mp << std::endl;
}