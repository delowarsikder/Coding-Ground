#include <bits/stdc++.h>
using namespace std;

int main()
{
  //freopen("input.txt", "r", stdin);
  int tc;
  cin >> tc;
  string str;
  cin >> str;
  char arr[10];
  char ch;
  for (int i = 1; i <= 9; i++)
  {
    cin >>ch;
     arr[i]=ch;
  }
  string ans = "";
  for (int i = 0; i < str.length(); i++)
  {
    char ch;
    if (str[i] > arr[str[i] - '0'])
    {
      ch = str[i];
    }
    else
    {
      ch = arr[str[i] - '0'];
    }
    ans = ans + ch;
  }

  cout << ans << endl;

  return 0;
}
