# private + getter/setter
```cpp
class Fruit{
    private:
        std::string name;
        int price;
    public:
        void setName(std::string _name);
        void setPrice(int _price);
        std::string getName();
        int getPrice();
};
```



invalid use of 'this' outside of a non-static member function

this 只能在「物件的成員函式」裡用，其他地方（像 static 函式或全域）不能用