#include <iostream>


int main()
{
    int x;
    std::cin>>x;
    bool flag = false; //нашли ли мы число
    for(int i = x + 1; i < 10000 && not flag; i++){
        int a1 = i %  10;
        int a2 = i / 10 % 10;
        int a3 = i / 100 % 10;
        int a4 = i / 1000;
        bool f = false;
        f = f + (a1 == a2);
        f = f + (a1 == a3);
        f = f + (a1 == a4);
        f = f + (a2 == a3);
        f = f + (a2 == a4);
        f = f + (a3 == a4);
        if (not f){
            std::cout<<i;
            flag = true;
        }
    }
}
