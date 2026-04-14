#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    for (i = 1; i<n+1; i++){
        if (i%4 == 0){
            cout << i << " ";
        }
    }
    return 0;
}