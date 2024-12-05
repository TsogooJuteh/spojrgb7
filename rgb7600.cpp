#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (n == 0) {
        std::cout << n;
        return 0;
    }
    if (n < 3) {
        std::cout << n;
        return 0;
    }
    long long a = 1, b = 2, c;
    for (int i = 2; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    std::cout << c;

    return 0;
}