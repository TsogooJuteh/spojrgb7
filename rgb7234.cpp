#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    int n;
    std::cin >> n;
    double hariu = 0;
    if (n == 0) {
        hariu = std::cos(0);
        std::cout << std::fixed << std::setprecision(3) << hariu;
        return 0;
    } else if (n == 1) {
        hariu = std::cos(1 + hariu);
        std::cout << std::fixed << std::setprecision(3) << hariu;
        return 0;
    }
    hariu = std::cos(n);
    for (int i = n - 1; i > 0; i--) {
        hariu = std::cos(i + hariu);
    }

    std::cout << std::fixed << std::setprecision(3) << hariu;
    
    return 0;
}