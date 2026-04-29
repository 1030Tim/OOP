// Customer.cpp
#include<iostream>
#include "Customer.h"

int Customer::numCustomer = 0;

Customer::Customer(){
    numCustomer++;
}
Customer::~Customer(){
    numCustomer--;
}