#include<iostream>

class ComputerFunction{
    int a,b;
    public:
        int sum(int x, int y){
            a = x;
            b = y;
            return a+b;
        }
};

int main(){
    ComputerFunction cf;
    std::cout << cf.sum(2,3) << std::endl;
    return 0;
    
}