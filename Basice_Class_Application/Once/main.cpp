#include<iostream>
#include<string>
#include "Fruit.h"
using namespace std;

int main(){
    Fruit f1;
    string name;
    int price;
    cin >> name >> price;
    f1.setName(name);
    f1.setPrice(price);
    cout << f1.getName() << " " << f1.getPrice() << endl;
}