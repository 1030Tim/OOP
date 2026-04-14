//main.cpp
#include<iostream>
#include "Watch.h"
using namespace std;

int main(void){
    Watch w1(10,20,30);
    w1.print();

        int h,m,s;
        while(1){
            cin >> h;
            if (w1.setHour(h)){
                break;
            }
            cout << "please enter H \n";
            continue;
        }
        while(1){
            cin >> m;
            if (w1.setMin(m)){
                break;
            }
            cout << "please enter M \n";
            continue;
        }
        while(1){
            cin >> s;
            if (w1.setSec(s)){
                break;
            }
            cout << "please enter S \n";
            continue;
        }

    w1.print();
}