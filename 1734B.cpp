#include <iostream>


int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        std::cin>>n;
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= j; ++k){
                if(k == 1 || k == j){
                    std::cout<<1<<' ';
                }
                else{
                    std::cout<<0<<' ';
                }
            }
            std::cout<<std::endl;

        }
    }
}
