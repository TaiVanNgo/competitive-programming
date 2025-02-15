/*
Author: Tai Ngo
Date: 2025-02-14
Link to the problem: https://codeforces.com/problemset/problem/691/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> buttons(n);

  // get inputs
  for (int &b : buttons)
    cin >> b;

  int numOfOpenButtons = 0;

  for (int i = 0; i < n; i++)
  {
    if (buttons[i] == 0)
    {
      numOfOpenButtons++;
    }
  }

  if (n == 1 && numOfOpenButtons == 0)
  {
    cout << "YES";
  }
  else if (numOfOpenButtons == 1 && n > 1)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}