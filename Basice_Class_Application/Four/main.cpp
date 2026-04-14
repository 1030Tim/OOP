#include<iostream>
#include<string>
#include "MyData.h"
using namespace std;

int main(){
    MyData data1; 
    int y,m,d;
    cin >> y >> m >> d;
    data1.setData(y,m,d);
    data1.print();
    return 0;
}