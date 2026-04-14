#include<iostream>
using namespace std;
int main(){
    int i,j,n = 9;
    for (i = 2; i<n+1; i++){
        for (j = 1; j<n+1; j++){
            cout << i << "*" << j << "=" << i*j << " ";
        }
        cout << "\n";
    }
    return 0;
}