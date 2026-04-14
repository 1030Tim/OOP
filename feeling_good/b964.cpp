#include<iostream>
int main(){
    int n,i,j,arr[20];
    std::cin >> n;
    for (i = 0; i<n; i++){
        int k;
        std::cin >> k;
        arr[i] = k;
    }
    int ArrayMin = 10000;
    int ArrayMax = -10000;

    for (i = 0; i<n; i++){
        for (j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int k = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k; 
            }

        }
        if (arr[i] < 60 && arr[i]>ArrayMax) ArrayMax = arr[i];
        else if (arr[i]>=60 && arr[i]<ArrayMin) ArrayMin = arr[i];
    }

    for (i = 0; i<n-1; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << arr[n-1] << "\n";
    
    if (ArrayMax == -10000) std::cout << "best case" << "\n";
    else std::cout << ArrayMax << "\n";

    if (ArrayMin == 10000) std::cout << "worst case" << std::endl;
    else std::cout << ArrayMin << std::endl;

    return 0;
}