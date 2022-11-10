#include <iostream>
using namespace std;

// algorithm
/*
1.start traverse from right
2.Find the longest non-increasing suffix , if not found suffix-that means string is already highest sorted
3. find the rightmost successor to the pivot
3.swap pivot and successor
4.reverse the suffix
*/

// ab
// bb
// hefg
// dhck
// dkhc

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    string s;
    cin >> s;
    int lengthString = s.length();
    int pivot = -1;
    // search pivot
    for (int i = lengthString - 1; i > 0; i--)
    {
      if (s[i - 1] < s[i])
      {
        pivot = i - 1;
        break;
      }
    }
    if (pivot != -1)
    {
      int rightMostSuffixPos = -1;
      // right most successor of pivot
      for (int i = lengthString - 1; i >= 0; i--)
      {
        if (s[i] > s[pivot])
        {
          rightMostSuffixPos = i;
          swap(s[i], s[pivot]);
          break;
        }
      }
      int _size = lengthString - 1;
      int strt = pivot + 1;
      while (strt < _size)
      {
        swap(s[strt], s[_size]);
        strt++;
        _size--;
      }
      cout << s << endl;
    }
    else
    {
      cout << "no answer" << endl;
    }
    }
  return 0;
}