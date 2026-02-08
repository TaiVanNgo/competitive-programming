/*
Author: Tai Ngo
Date: 2025-05-12
Link to the problem: https://cses.fi/problemset/task/1192
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  char inputs[n][m];

  for (int r = 0; r < n; r++) {
    for (int c = 0; c < m; c++) {
      char input;
      cin >> input;
      inputs[r][c] = input;
    }
  }
}