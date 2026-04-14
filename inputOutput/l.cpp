#include<iostream>
using namespace std;
int main(){
    int n,i,sum = 0;
    cin >> n;
    for (i = 1; i<n+1; i++){
        if (i%3 == 0){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}