#include <iostream>


int main()
{
    const double eps = 0.00000001;
    int n;
    std::cin >> n;
    int ch = 0;
    for (int i = 0; i < n; i++){
        double x; double y;
        std::cin >> x >> y;
        if((x * x + y * y <= 4) && (y >= (2 - x * x))){
            ch += 1;
            std::cout << "YES";
        }
    }
    double res = ch / n;
    std::cout << res;
}
