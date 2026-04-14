// 11424101
#include<iostream>
#include<string>
#include "Complex.h" // include head file
using namespace std;

int main(){
    Complex c1;
    Complex c2("B110");
    Complex c3("C1100",2);
    Complex c4("D10000",4,6);
    Complex c5;
    
    string _id;
    int _real,_image;

    cin >> _id >> _real >> _image;
    c5.sexId(_id); c5.sexReal(_real); c5.sexImage(_image);
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    c5.print();
    return 0;
}