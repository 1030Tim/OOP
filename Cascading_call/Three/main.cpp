// main.cpp
#include<iostream>
#include<string>
#include "Fruit.h"
using namespace std;

int main(void){
    Fruit f1;
    f1.setName("Apple").setAmount(10).print();
    return 0;
}