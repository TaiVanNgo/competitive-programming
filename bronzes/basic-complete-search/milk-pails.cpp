// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=615

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  freopen("pails.in", "r", stdin);

  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;

  int best = 0;

  for (int i = 0; i <= b3; i++)
  {

    if (b1 * i > b3)
      break;

    for (int j = 0; j <= b3; j++)
    {
      int total_milk = (b1 * i) + (b2 * j);

      if (total_milk > b3)
        break;

      best = max(best, total_milk);
    }
  }
  freopen("pails.out", "w", stdout);

  cout << best << endl;

  return 0;
}