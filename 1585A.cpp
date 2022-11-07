#include <iostream>
#include <array>
int main()
{
    int  t;
    std::cin>>t;
    for (int k = 0; k < t; k++){
        int n;
        std::cin>>n;
        std::array<int, 100> m;
        bool f = true;
        for (int i = 0; i<n;  i++){
            std::cin>>m[i];
        }
        int ch = m[0] + 1;
        for(int i = 1; (i < n) && f; i++){
            if (m[i] == 0){
                if (m[i-1] == 0){
                    f = false;
                    std::cout<<-1<<std::endl;
                }
            }
            else{
                if (m[i-1] == 1){
                    ch += 5;
                }
                else{
                    ch += 1;
                }
            }
        }
        if (f){
        std::cout<<ch<<std::endl;
        }
    }
 
}
