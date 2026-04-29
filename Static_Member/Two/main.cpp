// main.cpp
#include<iostream>
#include<string>
#include "ParkingLot.h"
using namespace std;

int main(void){
    ParkingLot car1("168AA6",6);
    ParkingLot car2("8888-88",60);
    cout <<  car1.getCarId() << "/" << car1.getHours() << endl;
    cout <<  car2.getCarId() << "/" << car2.getHours() << endl;
    return 0; 
}