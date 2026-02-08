/*
Author: Tai Ngo
Date: 2025-08-30
Link to the problem: https://atcoder.jp/contests/abc421/tasks/abc421_a
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, string> S;

  for (int i = 0; i < N; i++) {
    string name;
    cin >> name;
    S[i + 1] = name;
  }

  int X;
  string Y;
  cin >> X >> Y;

  map<int, string>::iterator it = S.find(X);

  if (it != S.end() && it->second == Y) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}