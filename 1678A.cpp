#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    
    for (int i(0); i < t; i++) {
        int n;
        std::cin >> n;
        std::vector<int> mas(n);
        int null_count(0);
        int res(0);
        
        for (int j(0); j < n; j++) {
            std::cin >> mas[j];
            if (mas[j] == 0) {
                null_count += 1;
            }
        }
        
        if (null_count != 0) {
            res = n - null_count;
        } 
        else {
            int diff_count(0);
            
            for (int j(0); j < n - 1; j++) {
                for (int k(j + 1); k < n; k++) {
                    if (mas[j] == mas[k]) {
                        res = n;
                    } 
                    else {
                        diff_count += 1;
                    }
                }
            }
            
            if (diff_count == n * (n - 1) / 2) {
                res = n + 1;
            }
        }
        std::cout << res << std::endl;
    }
    return 0;
}
