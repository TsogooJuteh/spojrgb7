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

    std::vector<int> predecessor(n + 1, -1);

    dp[0] = 0;
    if(n >= 1) {
        dp[1] = prices[0];
        predecessor[1] = 0;
    }

    for(int i = 2; i <= n; i++) {
        if(dp[i-1] < dp[i-2]) {
            dp[i] = dp[i-1] + prices[i-1];
            predecessor[i] = i-1;
        }
        else {
            dp[i] = dp[i-2] + prices[i-1];
            predecessor[i] = i-2;
        }
    }

    std::cout << dp[n] << "\n";

    std::vector<int> path;
    int current = n;
    while (current > 0) {
        path.push_back(current);
        current = predecessor[current];
    }

    std::reverse(path.begin(), path.end());

    for(int i = 0; i < path.size(); i++) {
        std::cout << path [i] << " ";
    }

    return 0;
}
