// main.cpp
#include<iostream>
#include "Grade.h"
using namespace std;
int main(void){
    Grade stud1;
    stud1.print();

    while(1){
        double eng,chi;
        cin >> eng >> chi;
        if (stud1.setChi(chi) && stud1.setEng(eng)) break;
    }
    stud1.print();
    return 0;
}