/*
Author: Tai Ngo
Date: 2025-04-28
Link to the problem: https://cses.fi/problemset/task/1633
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

/**
 * PROBLEM SUMMARY :
 * You're given a number `n`
 * You can throw dice (1 - 6) multiple times
 * Find the number of ways to sum to exactly `n` using dice throw
 * Output result modulo 10e9 + 7
 * 1≤n≤10e6
 *
 * dp[0] = 1 -> (do nothing)
 * dp[1] = dp[0] -> 1
 * dp[2] = dp[1] + dp[0] -> 2
 * dp[3] = dp[2] + dp[1] + dp[0] -> 4
 *
 */

const int MOD = 1e9 + 7;

int main()
{
  int n;
  cin >> n;
  vector<long long> dp(n + 1, 0);

  dp[0] = 1;
  for (int sum = 1; sum <= n; sum++)
  {
    for (int dice = 1; dice <= 6; dice++)
    {
      if (sum - dice >= 0)
      {
        // if dice's smaller or equal sum
        dp[sum] = (dp[sum] + dp[sum - dice]) % MOD;
      }
    }
  }

  cout << dp[n];
}