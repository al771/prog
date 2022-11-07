#include <iostream>
 
int main()
{
    int  t;
    std::cin>>t;
    for (int k = 0; k < t; k ++){
        int a1, a2, a3, a4;
        std::cin>>a1>>a2>>a3>>a4;
        int sm = a1+ a2 + a3 + a4;
        if (sm == 0){
            std::cout<<0<<std::endl;
        }
        else if (sm == 1 || sm == 2 || sm == 3){
            std::cout<<1<<std::endl;
        }
        else if (sm == 4){
            std::cout<<2<<std::endl;
        }
    }
}