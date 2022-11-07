#include <iostream>
#include <array>
int main()
{
    int  n;
    std::cin>>n;
    std::array<int, 100> m;
    for (int i = 0; i < n; i++){
        int x;
        std::cin>>x;
        m[x - 1] = i + 1;
    }
    for (int i = 0; i < n; i++){
        std::cout<<m[i]<<' ';
    }
 
}