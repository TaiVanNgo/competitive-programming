/*
Author: Tai Ngo
Date: 2025-02-15
Link to the problem: https://codeforces.com/problemset/problem/500/A
Link to explained video:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, t;
  cin >> n >> t;

  vector<int> cells(n - 1);

  for (auto &c : cells)
    cin >> c;

  int i = 1;

  while (i < n)
  {
    if (i == t)
    {
      cout << "YES";
      return 0;
    }

    i += cells[i - 1];
  }

  // check if t and n is the same
  if (i == t)
  {
    cout << "YES";
    return 0;
  }

  cout << "NO";
}