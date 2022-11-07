#include <iostream>
 
 
int main()
{
  int ch, rez, a1, a2;
  for (int i = 0; i<25; i++)
  {
        int x;
        std::cin>>x;
        if (x==1){
            ch = i;
        }
  }
    a1 = ch/5 - 2;
    if  (a1< 0){a1 = -a1;}
    a2 = ch%5 - 2;
    if  (a2< 0){a2 = -a2;}
    rez = a1+a2;
    std::cout<<rez;
 
}

