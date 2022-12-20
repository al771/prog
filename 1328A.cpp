#include <iostream>
 
int main() {
    int t(0);
    std::cin >> t;
    
    for (int i(1); i <= t; ++i) {
        int a(0);
        int b(0);
        std::cin >> a >> b;
        
        if (a % b == 0) {
            std::cout << 0 << std::endl;
        } else {
            int z(0);
            z = int (a/b) + 1;
            std::cout << b * z - a << std::endl;
        }
    }
}