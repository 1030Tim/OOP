#include<iostream>
using namespace std;
int main(){
    int n,i,pow = 1;
    cin >> n;
    for (i = 1; i<n+1; i++){
        pow*=i;
    }
    cout << pow << endl;
    return 0;
}