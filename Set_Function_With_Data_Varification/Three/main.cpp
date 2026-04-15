// main.cpp
#include<iostream>
#include<string>
#include "Member.h"
using namespace std;
int main(void){
    Member m1("noname",0,0);
    m1.print();
    while(1){
        string n;
        double h,w;
        cin >> n >> h >> w;
        
        if ((m1.setName(n)>0 ) && (m1.setHeight(h)>0) && (m1.setWeight(w)>0)){
            break;
        }
    }
    m1.print();
}