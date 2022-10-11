#include <iostream>
#include <string>
 
int main()
{
    int t;
    std::cin>>t;
    for(int j = 0; j < t; j++){
        int n;
        int m;
        std::cin>>n>>m;
        bool find = false;
        bool flag = true;
        int left_stolb = -1;
        for (int i = 0; i < n; i++){
            std::string str;
            std::cin>>str;
            for (int k = 0; k < str.size(); k++){
                if (str[k] == 'R')
                {
                    if (find){
                        if (k < left_stolb){
                            flag = false;
                        }
                    
                    }
                    else{
                        find = true;
                        left_stolb = k;
                    }
                }
            }
        }
        if(flag){
            std::cout<<"YES"<<std::endl;
        }
        else{
         std::cout<<"NO"<<std::endl;   
        }
  
 }
}
