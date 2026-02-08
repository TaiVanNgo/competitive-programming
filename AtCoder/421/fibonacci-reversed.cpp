/*
Author: Tai Ngo
Date: 2025-08-30
Link to the problem: https://atcoder.jp/contests/abc421/tasks/abc421_b
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

long long rev(long long num) {
  long long rev_num = 0;

  while (num != 0) {
    int digit = num % 10;
    rev_num = rev_num * 10 + digit;
    num /= 10;
  }

  return rev_num;
}

int main() {
  long long X, Y;
  cin >> X >> Y;

  long long a[100000 + 2];
  a[1] = X;
  a[2] = Y;

  for (int i = 3; i <= 10; i++) {
    // a[i] = rev(a[i - 1]) + rev(a[i - 2]);
    long long sum = a[i - 1] + a[i - 2];
    a[i] = rev(sum);
  }

  cout << a[10];

  return 0;
}