/*
Author: Tai Ngo
Date: 2025-12-04
Link to the problem: link-to-the-problem
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  long long n;
  cin >> n;
  long long cnt = 0;
  for (long long i = 5; i <= n; i *= 5) {
    cnt += n / i;
  }

  cout << cnt;
}