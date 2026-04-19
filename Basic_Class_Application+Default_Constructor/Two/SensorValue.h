// SensorValue.h
#ifndef SENSORVALUE_H
#define SENSORVALUE_H

class SensorValue{
    private:
        double value;
    public:
        SensorValue(double value = 0.0);
        void setValue(double value);
        void print();
};

#endif