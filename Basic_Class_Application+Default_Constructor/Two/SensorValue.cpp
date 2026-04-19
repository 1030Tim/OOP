// SensorValue.cpp
#include<iostream>
#include "SensorValue.h"

SensorValue::SensorValue(double _value){
    this->value = _value;
}
void SensorValue::setValue(double _value){
    this->value = _value;
}
void SensorValue::print(){
    std::cout << this->value << std::endl;
}