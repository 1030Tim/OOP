// ParkingLot.h
#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include<string>

class ParkingLot{
    private:
        static const int hoursAday;
        const std::string carId;
        int hours;
    public:
        ParkingLot(const std::string _carId, int _hours);
        std::string getCarId();
        int getHours();
};

#endif