/*
Author: Tai Ngo
Date: 2025-04-21
Link to the problem: https://cses.fi/problemset/task/1068
Link to explained video:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  cout << n << " ";
  while (n != 1)
  {
    // if even
    if (n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n *= 3;
      n++;
    }

    cout << n << " ";
  }
}