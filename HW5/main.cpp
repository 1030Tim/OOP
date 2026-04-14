// 11424101陳閔駿
#include<iostream>
#include<string>
#include "Counter.h"

int main(){
    Counter c1("Exercise",0);
    printCounter(c1);
    incCounter(c1);
    printCounter(c1);
    return 0;
}
/*
避免與Windows相容性問題若是無法正常開啟
請在終端或是cmd用 linux 編譯C++的語法即可

g++ main.cpp Counter.cpp -o run
./run

*/