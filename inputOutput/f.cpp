// 輸入台幣twd，轉為美元後印出 (1台幣 = 0.032美元)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float twd,s = 0.032;
    cin >> twd;
    cout << setprecision(2) << (twd*s) << endl;
    return 0;
}