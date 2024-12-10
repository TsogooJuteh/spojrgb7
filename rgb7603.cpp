#include <iostream>
#include <vector>

int main() {
    int a, b, input;
    std::cin >> a >> b;
    std::vector<bool> evderhii(a + 1, false);

    for(int i = 0; i < b; i++) {
        std::cin >> input;
        if (input >= 1 && input <= a) {
            evderhii[input] = true;          
        }
    }

    std::vector<double> dp(a + 1, 0);
    dp[0] = 1;

    for(int i = 1; i <= a; i++) {
        if (evderhii[i]) {
            dp[i] = 0;
        } else {
            long long ways = 0;
            if (i-1 >= 0) ways += dp[i-1];
            if (i-2 >= 0) ways += dp[i-2];
            if (i-3 >= 0) ways += dp[i-3];
            dp[i] = ways;
        }
    }

    std::cout << dp[a];

    return 0;
}