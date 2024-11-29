#include<iostream>
#include<vector>

int main() {
    int n, input;
    std::vector<int> numbers;
    std::cin >> n;
    
    for (int i = 0; i < n; i++){
        std::cin >> input;
        numbers.push_back(input);
    }

    int maxval = numbers[0];
    int count = 1;

    for (int i = 1; i < n; i++){
        if (numbers[i] > maxval) {
            maxval = numbers[i];
            count = 1;
        } else if (numbers[i] == maxval) {
            count++;
        }

    }

    std::cout << maxval << " " << count;

    return 0;
}