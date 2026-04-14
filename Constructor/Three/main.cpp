#include<iostream>
#include "Rect.h"
using namespace std;

int main(void){
    Rect rect1;
    rect1.print();
    int lenght,wedth;
    cin >> lenght >> wedth;
    rect1.setSize(lenght,wedth);
    cout << rect1.area() << endl;
    return 0;
}