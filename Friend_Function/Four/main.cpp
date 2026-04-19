#include<iostream>
#include "Date.h"
using namespace std;

int main(void){
    Date date1(1911,1,1);
    Date date2(2024,1,1);
    printDate(date1);
    printDate(date2);
    return 0;
}