/*
Author: Tai Ngo
Date: 2025-02-15
Link to the problem: https://codeforces.com/problemset/problem/4/A
Link to explained video:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

  int w;
  cin >> w;

  if (w % 2 == 0 && w > 2)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}
