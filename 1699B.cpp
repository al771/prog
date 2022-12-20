#include <iostream>
 
int main() {
    int t;
    std::cin >> t;
    
    for (int i(0); i < t; i++) {
        int n, m;
        std::cin >> n >> m;
        
        for (int j(1); j <= n; j++) {
            for (int o(1); o <= m; o++) {
                std::cout << ((j % 4 <= 1) == (o % 4 <= 1)) << " ";
            }
            std::cout << std::endl;
        }
    }
}