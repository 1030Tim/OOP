// main.cpp
#include<iostream>
#include "Customer.h"
using namespace std;

int main(void){
    cout << "1: " << Customer::numCustomer << endl; // 0
    Customer c1; // 1;
    {// 區域函數
        Customer c2,c3;// 3  
        cout << "2: " << Customer::numCustomer << endl;
    }// 自動解構2
    cout << "3: " << Customer::numCustomer << endl; // 3
    Customer c4;
    cout << "4: " << Customer::numCustomer << endl;// 4
    return 0;

}
