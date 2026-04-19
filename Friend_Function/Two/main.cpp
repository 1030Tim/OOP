// main.cpp
#include<iostream>
#include<string>
#include "Fruit.h"
using namespace std;

int main(void){
    Fruit f1("Apple",10);
    f1.print();
    sellFruit(f1,5);
    f1.print();
    return 0;
}