#include<iostream>
#include<string>
#include "Member.h"
using namespace std;

signed main(){
    Member m1;
    string med;
    int level;
    cin >> med >> level;
    m1.setMed(med);
    m1.setlevel(level);
    cout << m1.getMed() << " " << m1.getLevel() << endl;
    return 0;
}