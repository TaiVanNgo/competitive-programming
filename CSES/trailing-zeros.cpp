/*
Author: Tai Ngo
Date: 2025-04-21
Link to the problem: https://cses.fi/problemset/task/1618
*/

#include <bits/stdc++.h>

using namespace std;

/** IDEA TO SOLVE THE PROBLEM
 * range => How many 5 in that range
 *
 *  0 -> 0 trailing 0
 *  5 -> 1 trailing 0
 * 10! -> 2 trailing 0
 * 15! -> 3 trailing 0
 * 20! -> 4 trailing 0
 *
 * However, but for 25! -> it has 6 trailing zero.
 * => 25 / 5 = 5.
 * => 5 / 5 = 1.
 * -> in total, it has 6 trailing zero
 */

int main()
{
  long long n;
  cin >> n;

  int res = 0;
  while (n >= 5)
  {
    res += n / 5; // take the trailing zero from n
    n = n / 5;    // reduce n
  }

  cout << res;
}