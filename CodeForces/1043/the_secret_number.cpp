/*
Author: Tai Ngo
Date: 2025-08-21
Link to the problem: https://codeforces.com/contest/2132/problem/B
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

/** SOLUTION:
 *
 * In this problem, we can identify the formula easily
 * From the problem description we have
 *    (1) n = x + y
 *    (2) y = x * 10^k (where k is the number of zero)
 *
 * We combine the two equation to have the final equation to find `x`
 *
 *     n = x + x * 10^k
 * <=> n = x(1 + 10^k)
 * <=> x = n/(1+10^k)
 *
 * After testing all the possible k (0 < k < n/10), we can obtain x
 */

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    vector<long long> ans;
    long long n;
    cin >> n;

    int x = 1;
    long long power_of_ten = 10;

    // count the "length" of the integer n
    while (true) {
      long long divisor = 1 + power_of_ten;

      if (divisor > n) break;

      if (n % divisor == 0) {  // if the power of ten is divisible by n
        long long x = n / divisor;
        ans.push_back(x);
      }

      if (power_of_ten > n / 10) break;

      // update the power of ten
      power_of_ten *= 10;
    }

    sort(ans.begin(), ans.end());  // sort before print

    cout << ans.size() << endl;

    if (ans.size() > 0) {
      for (long long a : ans) {
        cout << a << " ";
      }
      cout << endl;
    }
  }
}