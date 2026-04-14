// 11424101
#include<iostream>
#include<string>
#include<iomanip>
#include "Complex.h"
using namespace std;
Complex::Complex(string i, int r , int im){
    id = i;
    real = r;
    image = im;
}
void Complex::sexId(std::string _id){
    id = _id;
}
void Complex::sexReal(int _real){
    real = _real;
}
void Complex::sexImage(int _image){
    image = _image;
}
void Complex::print(){
    cout << setfill('*') << setw(6) << id << " : <";
    cout << setfill('-') << setw(4) << real << ",";
    cout << setfill('0') << setw(4) << image << ">\n"; 
}

