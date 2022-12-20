#include <iostream>
#include <vector>
 
int main() {
    int t
    int n;
    std::cin >> t;
    
    while (t > 0) {
        std::vector<int> mas(100, 0);
        std::cin >> n;
        
        for (int i(0); i < n; i++) {
            std::cin >> mas[i];
        }
        
        int res(mas[0]);
        
        for (int i(1); i < n; i++) {
            res &= mas[i];
        }
        
        std::cout << res << std::endl;
        t -= 1;
    }
    
    return 0;
}
