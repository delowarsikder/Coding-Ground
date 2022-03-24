#include <bits/stdc++.h>
using namespace std;

int arr[] = {5, 7, 7, 8, 8, 10};
int _size = sizeof(arr) / sizeof(int);

int upper_bound(int key)
{
    int left = 0;
    int right = _size;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (key < arr[mid])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int lower_bound(int key)
{
    int left = 0;
    int right = _size;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (key <= arr[mid])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    int key=8;
    int up = upper_bound(key);
    int low=lower_bound(key)
    cout << " " << pos << endl;
    return 0;
}