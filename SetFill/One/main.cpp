#include<iostream>
#include<iomanip>
#include "Mytime.h"
using namespace std;

int main(void){
    Mytime t1;
    t1.print();
    // enter h m s
    int h,m,s;
    cin >> h >> m >> s;
    t1.setTime(h,m,s);
    t1.print();
}