/*
Author: Tai Ngo
Date: 13-Feb-2025
Link to the problem: https://cses.fi/problemset/task/1068/
*/

#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
  ll n;

  cin >> n;

  cout << n << " ";

  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
    }
    else
    {
      n = (n * 3) + 1;
    }
    cout << n << " ";
  }

  return 0;
}