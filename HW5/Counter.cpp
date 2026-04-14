// 11424101陳閔駿
#include<iostream>
#include<string>
#include "Counter.h"


Counter::Counter(std::string name, int count){
    this->name = name;
    this->count = count;
    // 用this->指向當前物件，這樣就不用改名了
    /*
    等同於Counter::Counter(std::string n, int c){
        name = n; count = c;
    }
    */
}

void printCounter(const Counter &c){
    std::cout << "Name: " << c.name
              << ", Count:"  << c.count
              << std::endl;
}

void incCounter(Counter &c){
    c.count++;
}