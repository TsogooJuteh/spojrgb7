#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main() {
    int n;
    std::cin >> n;
    int input;

    std::vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<int> dp(n + 1, 0);

    dp[0] = 0;
    if(n >= 1) {
        dp[1] = prices[0];
    }

    for(int i = 2; i <= n; i++) {
        dp[i] = std::min(dp[i - 1], dp[i - 2]) + ((i-1) < n ? prices[i - 1] : 0);
    }

    std::cout << dp[n];

    return 0;
}
