#include<iostream>

class SumFunction{
  public:
    int a;
    int b;
};
int ComputerSum(SumFunction sf){
    sf.a = 20;
    sf.b = 40;
    int sum = sf.a+sf.b;
    return sum;
}
int main(){
    SumFunction sf;
    std::cout << ComputerSum(sf) << std::endl;
}