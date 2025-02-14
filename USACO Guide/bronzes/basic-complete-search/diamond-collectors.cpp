/*
Author: Tai Ngo
Date: 2025-02-13
Link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=639
Link to videos: https://www.youtube.com/watch?v=OP0gXsWewIA
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);

  int n, k;

  cin >> n >> k;

  vector<int> diamonds(n);

  for (auto &t : diamonds)
  {
    cin >> t;
  }

  int maxCount = 0;

  for (int i = 0; i < n; i++)
  {
    int suitableDiamond = 0;
    for (int j = 0; j < n; j++)
    {
      if (diamonds[i] <= diamonds[j] && diamonds[j] <= diamonds[i] + k)
      {
        suitableDiamond++;
      }
    }
    maxCount = max(maxCount, suitableDiamond);
  }

  cout << maxCount;
}