#include <iostream>
 
int main() {
    int t;
    std::cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, res;
        std::cin >> n;
        res = n + 2 * (n / 2) + 2 * (n / 3);
        std::cout << res << std::endl;
    }
    
    return 0;
}
