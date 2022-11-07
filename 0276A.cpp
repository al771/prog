#include <iostream>
#include <array>

int main()
{
    int n;
    int k;
    std::cin>>n>>k;
    std::array<int, 10001> f;
    std::array<int, 10001> t;
    for (int i = 0; i < n; i++){
        std::cin>>f[i]>>t[i];
    }
    int maxim = 0;
    if (t[0] > k){
        maxim = f[0] - t[0] + k;
    }
    else{
            maxim = f[0];
    }
    for (int i = 0; i < n; i++){
        int a = 0;
        if (t[i] > k){
                a = f[i] - t[i] + k;
        }
        else{
            a = f[i];
        }
        if (a > maxim){
            maxim = a;
        }
    
    }
    std::cout<<maxim;
}
