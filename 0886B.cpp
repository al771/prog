#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
 
int main() {
    int n;
    std::cin >> n;
    std::vector<int> mas(200001, -1);
    
    for (int i(0); i < n; i++) {
        int index(0);
        std::cin >> index;
        mas[index] = n - i - 1;
    }
    
    std::cout << std::distance(std::begin(arr), std::max_element(std::begin(arr), std::end(arr)));
}