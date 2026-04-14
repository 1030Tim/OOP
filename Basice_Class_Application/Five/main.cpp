#include<iostream>
#include "Grade.h"
using namespace std;

int main(){
    Grade stud;
    stud.setGrade("10700001", 90,70);
    stud.print();
    return 0;
}