#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 6, 3, 9, 0, 5, 7, 1, 2};
    int _size = sizeof(arr) / sizeof(int);
    // calculate the second highest
    //  ans : 6
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < _size; i++)
    {
        if (first < arr[i])
        {
            second = first;
            first = arr[i];
        }
        if (arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }
    cout << "second first: " << second << endl;
    return 0;
}