#include<iostream>

int main() {
    long long a;
    std::cin >> a;
    long long j = 10, asub = a * 10;
    if(a == 0){
        std::cout << 101* 101 << std::endl;
    } else {
        while (a != 0) {
            a = a /10;
            j = j * 10;
        }

        long long hariu = asub + 1 + j;

        std::cout << hariu * hariu;
    }

    return 0;
}