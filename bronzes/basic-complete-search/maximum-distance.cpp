// link to the problem: https://codeforces.com/gym/102951/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

  int N;
  cin >> N;

  vector<int> x(N), y(N);
  int max_dis = 0;

  // GET INPUT
  for (int &t : x)
  {
    cin >> t;
  }

  for (int &t : y)
  {
    cin >> t;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      int dx = x[j] - x[i];
      int dy = y[j] - y[i];
      int square_dis = dx * dx + dy * dy;

      max_dis = max(square_dis, max_dis); // update max_dis
    }
  }

  cout << max_dis << "\n";
}