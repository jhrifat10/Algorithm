#include <stdio.h>

int rodCutting(int prices[], int n) {
    int dp[n + 1]; // dp[i] will store the maximum revenue for rod length i
    dp[0] = 0;     // Base case: revenue for rod of length 0 is 0

    // Build the dp table
    for (int i = 1; i <= n; i++) {
        int max_val = -1;
        for (int j = 1; j <= i; j++) {
            max_val = (prices[j - 1] + dp[i - j] > max_val) ? prices[j - 1] + dp[i - j] : max_val;
        }
        dp[i] = max_val;
    }

    return dp[n];
}

int main() {
    int n; // Length of the rod
    printf("Enter the length of the rod: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the prices for lengths 1 to %d:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxRevenue = rodCutting(prices, n);
    printf("The maximum revenue obtainable is: %d\n", maxRevenue);

    return 0;
}
