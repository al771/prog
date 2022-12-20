#include <iostream>
 
int main() {
    int a, b;
    
    std::cin >> a >> b;
    
    int x(a);
    int y(b);
    int res(0);
    int i(0);
    
    while ((x > 0) || (y > 0)) {
        int r1, r2;
        r1 = x % 3;
        r2 = y % 3;
        x /= 3;
        y /= 3;
        int r((r2 + 3 - r1) % 3);
        int s(1);
        
        for (int k(0); k < i; k++) {
            s *= 3;
        }
        
        res += r * s;
        i +=1;
    }
    
    std::cout << res;
    return 0;
}
