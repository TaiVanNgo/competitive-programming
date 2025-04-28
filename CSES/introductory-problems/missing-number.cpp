/*
Author: Tai Ngo
Date: 2025-04-21
Link to the problem: https://cses.fi/problemset/task/1083
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long arrSum = 0;

  // take the sum of given array
  for (int i = 0; i < n - 1; i++)
  {
    int x;
    cin >> x;
    arrSum += x;
  }

  // the sum of continuous list 1->n
  long long sum = (n * (n + 1)) / 2;

  // the missing value is the difference between the correct sum and the missing sum from the given array
  cout << sum - arrSum;

  return 0;
}