// main.cpp
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

int main(void){
    Person p1,p2("Jony"),p3("Steven",170),p4("Mary",160,40),p5;
    string name;
    double height, weight;
    cin >> name >> height >> weight;
    p5.setName(name);
    p5.setHeight(height);
    p5.setWeight(weight);
    p1.print();
    p2.print();
    p3.print();
    p4.print();
    p5.print();
    return 0;
}