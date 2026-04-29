// main.cpp
#include<iostream>
#include "AnimalStatus.h"


int main(void){
    const AnimalStatus Boss(10000,20000);
    AnimalStatus a1(100,200);
    showStatus(Boss);
    showStatus(a1);
}