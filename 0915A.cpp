#include <iostream>
 
 
int main()
{
    int ved;
    int lenght;
    std::cin>>ved>>lenght;
    int min;
    min = 101;
    for(int i = 0; i < ved; i++){
     int x;
     std::cin>>x;
     
     if ((lenght % x == 0) && ((lenght / x) < min)){
        
         min = lenght / x;
     }
    
    }
    std::cout<<min;
}
