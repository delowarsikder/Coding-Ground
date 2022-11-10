#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  string pattern = "hackerrank";
  str = "hereiamstackerrank";
  cin >> str >> pattern;
  int lenStr = str.length();
  int patternLen = pattern.length();

  int store[patternLen + 2][lenStr + 2];
  memset(store, 0, sizeof(store));

  for (int i = 1; i <= patternLen; i++)
  {
    for (int j = 1; j <= lenStr; j++)
    {
      int val = 0;
      if (pattern[i - 1] == str[j - 1])
      {
        val = store[i - 1][j - 1] + 1;
      }
      else
      {
        val = max(store[i][j - 1], store[i - 1][j]);
      }
      store[i][j] = val;
    }
  }
  int ans = store[patternLen][lenStr];
  cout << "Longest Pattern" << ans << endl;
}