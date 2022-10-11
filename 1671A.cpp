#include <iostream>
#include <string>
 
int main()
{
    int t;
    std::cin>>t;
    for(int j = 0; j < t; j++){
  std::string str;
  std::cin>>str;
  int count_a = 0;
  int count_b = 0;
  bool f = true;
  //std::cout << str.size();
  
  for(int i = 0; i < str.size() && f; i++){
           if (str[i] == 'a'){
               if (count_b == 1){
                   f = false;
               }
               else{
                    count_b = 0;   
               }
              count_a += 1; 
           }
           else{
               if (count_a == 1){
                   f = false;
               }
               else{
                    count_a = 0;   
               }
              count_b += 1; 
           }
  }
  if (f && (count_a + count_b) != 1){
        std::cout<<"YES"<<std::endl;   
  }
  else{
      std::cout<<"NO"<<std::endl; 
  }
 }
}
