#include <iostream>


int main()
{
    int x;
    std::cin>>x;
    int n = 0;
    if (x % 5 != 0){
        n += 1;
    }
    std::cout<<x/5+n;
}
