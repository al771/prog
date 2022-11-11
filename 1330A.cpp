#include <iostream>
#include <vector>


int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        int n; int x;
        std::cin>>n>>x;
        std::vector<bool> numbers(201, false);
        for(int j = 0; j < n; j ++){
            int a;
            std::cin>>a;
            numbers[a-1] = true;
        }
        int dist = 0;
        bool flag = false;  // нашли ли мы V
        int v;
        for(int j = 0; j < 201 && not flag; j++){
            if (not numbers[j]){
                dist += 1;
                if (dist > x){
                    v = j;
                    flag = true;
                }
            }

        }
        std::cout<<v<<std::endl;

    }
    return 0;
}
