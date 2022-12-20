#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
    int a1, b1, c1, d1;
    std::cin >> a1 >> b1 >> c1 >> d1;
    int summa1(a1 + b1 + c1 + d1);
    int res(0);
    
    for (int i(0); i < (n - 1); i++) {
        int a, b, c, d;
        std:: cin >> a >> b >> c >> d;
        int summa(a + b + c + d);
        if (summa > summa1) {
            res += 1;
        }
    }
    
    std::cout << res + 1;
}