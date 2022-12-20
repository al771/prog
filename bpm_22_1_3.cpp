#include <iostream>
#include <string>
#include <array>


bool Is_glas(char x)
{
    if (x == 'a' || x == 'o' || x == 'u' || x == 'e' || x == 'i')
        return true;
    else return false;
}
int main()
{
    std::string a;
    std::cin >> a;
    std::array <char, 5> alth{'a', 'o', 'i', 'u', 'e'};
    bool fl = true;

    for(int i = 0; i < a.length() - 1 && fl; i++){
        if (not Is_glas(a[i])){
            if (not Is_glas(a[i+1])){
                fl = false;
            }

        }

    }
    if(not Is_glas(a[a.length() - 1] )){          //после согласной идет гласная значит нельзя заканчивать на согл
        fl = false;
    }
    if (fl){
        std::cout<<"Yes";
    }
    else{

    std::cout<<"No";
    }
}

