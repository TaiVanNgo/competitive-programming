/*
Author: Tai Ngo
Date: 2025-02-15
Link to the problem: https://codeforces.com/problemset/problem/677/A
Link to explained video:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, h;
  cin >> n >> h;

  vector<int> person(n);

  for (auto &p : person)
  {
    cin >> p;
  }

  int w = 0;
  // go to check each person
  for (int p : person)
  {
    if (p > h)
    {
      w += 2;
    }
    else
    {
      w += 1;
    }
  }

  cout << w;
}