// main.cpp
#include<iostream>
#include<string>
#include "Product.h"
using namespace std;
int main(void){
    Product p1("P0001","Moust",1000);
    Product p2("","",0);
    string pid,name;
    int amount;
    cin >> pid >> name >> amount;
    p2.setPid(pid);
    p2.setName(name);
    p2.setAmount(amount);
    p1.print();
    p2.print();
    return 0;
}