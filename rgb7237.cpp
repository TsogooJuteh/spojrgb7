#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int n;
    double input, hariu = 0;
    std::cin >> n;
    std::vector<double> numbers;

    for (int i = 0; i < n; i++) {
        std::cin >> input;
        numbers.push_back(input);
    }

    for (int i = 0; i < n; i++) {
        hariu = hariu + numbers[i];
    }

    hariu = hariu / n;

    std::cout << std::fixed << std::setprecision(2) << hariu;

    return 0;
}