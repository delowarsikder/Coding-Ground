#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[][3] = {{2, 3, 4}, {4, 0, 5}, {5, 3, 2}};
  int m[3][3] = {0};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int ans=0;
      for (int k = 0; k < 3; k++)
      {
        ans+=(a[i][k] * b[k][j]);
      }
      cout<<ans<<" ";
    }
    cout<<endl;
  }

  return 0;
}