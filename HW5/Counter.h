//11424101陳閔駿
#ifndef COUNTER_H  // .h的開始
#define COUNTER_H //標頭保護避免多次被引用
#include<iostream>
#include<string> //引用字串的標頭檔

class Counter{
    private:// 不公開
        std::string name;
        int count;
    public: //公開
        Counter(std::string name, int count); //建構子
    friend void printCounter(const Counter &c); //定義成員函式並用指標 const值不變更
    friend void incCounter(Counter &c);
};



#endif // .h的結束