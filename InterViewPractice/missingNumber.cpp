#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 6, 7};//0,1,3,4,5,6,7
  int _size = sizeof(arr) / sizeof(int);

  // find missing number
  int left = 0, right = _size;
  while (left < right)
  {
    int mid = left + (right - left) / 2;
    if(mid<arr[mid]){
      right=mid;
    }
    else if(mid==arr[mid])
    {
      cout<<"no missing"<<endl;
      return 0;
    }
   else {
      left=mid+1;
    }
  }
  cout<<"missing number : "<<left<<endl;


  return 0;
}