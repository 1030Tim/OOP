#include<iostream>
#include "Rect.h"

Rect::Rect(){
    this->lenght = 1;
    this->wedth = 1;
}
int Rect::area(){
    // 型別保證+物件保證
    return (int)(this->lenght*this->wedth);
}
void Rect::setSize(int lenght, int wedth){
    this->lenght = lenght;
    this->wedth = wedth;
}
void Rect::print() {
    std::cout << this->lenght << " "
              << this-> wedth << " "
              << area() << std::endl;
}