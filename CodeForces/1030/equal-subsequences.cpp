/*
Author: Tai Ngo
Date: 2025-06-12
Link to the problem: https://codeforces.com/contest/2118/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;  // test cases
  cin >> tc;
  while (tc--) {
    int n, k;

    cin >> n >> k;

    string str(n, '0');  // fill '0' to string with length n

    int cnt = k;  // count the number of '1'
    int idx = 0;  // index to keep track char in string
    while (cnt > 0 && idx < n) {
      str[idx] = '1';  // update char at `idx` to '1'
      idx += 2;
      cnt--;
    }

    // if the '1' isn't enough
    // add from back
    idx = n - 1;  // idx to the last char
    while (cnt > 0) {
      if (str[idx] == '0') {
        str[idx] = '1';
        cnt--;
      }
      idx--;
    }

    cout << str << endl;
  }

  return 0;
}