/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
*/
#include <stdio.h>
int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 5;
    int result = climbStairs(n);
    printf("Number of ways to climb %d stairs: %d\n", n, result);
    return 0;
}
/*
my result:

Input:
n = 3
Output:
3
*/
