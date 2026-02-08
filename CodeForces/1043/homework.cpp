/*
Author: Tai Ngo
Date: 2025-08-21
Link to the problem: https://codeforces.com/contest/2132/problem/A
Link to explained video: link-to-explained-video
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  // loop through the test case
  for (int i = 0; i < t; i++) {
    int n, m;
    string a, b, c;

    // get string a length
    cin >> n;
    // get string a
    cin >> a;

    // get string b & c length
    cin >> m;
    // get string b
    cin >> b;

    // get string c
    cin >> c;

    for (int i = 0; i < m; i++) {
      // Dima add to end
      if (c[i] == 'D') {
        a.push_back(b[i]);  // push the ith character of b to a
      }
      // Vlad add to begin
      else if (c[i] == 'V') {
        string b_string(1, b[i]);
        a.insert(0, b_string);
      }
    }

    // print the output
    cout << a << endl;
  }
}