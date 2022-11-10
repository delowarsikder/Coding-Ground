#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 6, 7}; // 0,1,3,4,5,6,7
  int _size = sizeof(arr) / sizeof(int);

  // find missing number
  int left = 0, right = _size;
  int mid = left + (right - left) / 2;
  while (left < right)
  {
    mid =(right + left) / 2;
    if (mid < arr[mid])
    {
      right = mid;
    }
    else if(mid!=arr[mid])
    {
      cout<<"missing number: "<<mid<<endl;
      return 0;
    }
    else
    {
      left = mid + 1;
    }
  }

  if (mid == arr[mid])
  {
    cout << "no missing number" << endl;
  }
  

  return 0;
}