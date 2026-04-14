// Grade.cpp
#include<iostream>
#include "Grade.h"

Grade::Grade(){
    this->chi = 0;
    this->eng = 0;
}
bool Grade::setChi(double chi){
    if (chi >= 0 && chi <= 100){
        this->chi = chi;
        return true;
    }
    return false;
}
bool Grade::setEng(double eng){
    if (eng >= 0 && eng <= 100){
        this->eng = eng;
        return true;
    }
    return false;
}
// 我的風格100%確保變數是此物件
void Grade::print(){
    std::cout << this->chi << " " << this->eng << "\n";
}