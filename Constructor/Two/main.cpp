#include<iostream>
#include "Person.h"
using namespace std;
int main(void){
    Person p1;
    Person p2;
    double height,weight;
    cin >> height >> weight;
    p1.setHight(height);
    p1.setWeight(weight);
    cout << p1.getHeight() << " " << 
            p1.getWeight() << " " << 
            p1.BMI() << endl;
    cin >> height >> weight;
    p2.setHight(height);
    p2.setWeight(weight);
    cout << p2.getHeight() << " " <<
            p2.getWeight() << " " <<
            p2.BMI() << endl;
    return 0;
}