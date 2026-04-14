#include<iostream>
#include<string>
#include "PhoneEntry.h"
using namespace std;

int main(){
    Phoneentry phone1;
    string name,tel;
    cin >> name >> tel;
    phone1.setName(name);
    phone1.setTel(tel);
    phone1.print();
    return 0;
}