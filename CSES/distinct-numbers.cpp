/*
Author: Tai Ngo
Date: 2025-04-21
Link to the problem: https://cses.fi/problemset/task/1621
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  set<int> res;

  for (int i = 0; i < n; i++)
  {
    long long x;
    cin >> x;
    res.insert(x);
  }

  // print the size of the set as it only contains distinct values
  cout << res.size();
}


