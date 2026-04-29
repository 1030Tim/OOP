// ParkingLot.cpp
#include<string>
#include "ParkingLot.h"

const int ParkingLot::hoursAday = 24;

ParkingLot::ParkingLot(const std::string _carId, int _hours):carId(_carId),hours(_hours){}

std::string ParkingLot::getCarId(){
    return this->carId;
}
int ParkingLot::getHours(){
    return this->hours;
}