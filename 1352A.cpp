#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin>>t;
    for (int i = 0; i < t; i ++){
    int a;
    std::cin>>a;
    int count_sm = 0; //счетчик слагаемых
    
    int a1 = a;
    for (a1; a1 > 0; a1 = a1 / 10){
            if (a1 % 10 != 0){
                count_sm += 1;
            }
    }
    std::cout<<count_sm<<std::endl;
    int ch = -1; // счетчик степени 10ки
    
    while(a > 0){
        ch += 1;
        int last;     // последняя цифра
        last = a % 10;
        if(last != 0){
            std::cout<<last * pow(10, ch)<<" ";
        }
        a = a / 10;
    }
    std::cout<<std::endl;
    }
}

