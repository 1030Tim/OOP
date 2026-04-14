#include<iostream>
#include "Person.h"

Person::Person(){
    this->height = 0.0;
    this->weight = 0.0;
}
void Person::setHight(double height){
    this->height = height;
}
void Person::setWeight(double weight){
    this->weight = weight;
}
double Person::BMI(){
    return (weight)/(height*height);
}
double Person::getHeight() const{
    return height;
};
double Person::getWeight() const{
    return weight;
}