// /*
// Author: Tai Ngo
// Date: 2025-04-21
// Link to the problem: https://cses.fi/problemset/task/1069
// */

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//   long long n;
//   cin >> n;

//   char arr[n];
//   for (int i = 0; i <= n; i++)
//   {
//     cin >> arr[n];
//   }

//   char lastChar = arr[0];
//   char currChar;
//   int maxRep = 0;
//   int currRep = 0;

//   for (int i = 1; i <= n; i++)
//   {
//     currChar = arr[i];
//     if (currChar == lastChar)
//     {
//       currRep++;
//     }
//     else
//     {
//       maxRep = max(maxRep, currRep);
//       currRep = 0;
//     }
//     lastChar = currChar; // update the last char
//   }

//   cout << maxRep;
// }