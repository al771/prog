#include <iostream>
#include <vector>


int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        int n; int m;
        int sx; int sy;
        int d;
        std::cin>>n>>m>>sx>>sy>>d;
        if (((sy - d > 1) && (sx + d < n))|| ((sx - d > 1) && (sy + d < m))){
                    std::cout<<n+m - 2<<std::endl;
        }
        else{
            std::cout<< -1<<std::endl;
        }

    }
    return 0;
}
