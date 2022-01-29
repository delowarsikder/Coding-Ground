#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[10000] = {0};
    int q = 2;     //fact means 2...n
    arr[0] = 1;    //initialized with 1
    int len = 1;   //number of element in array
    int track = 0; //
    int carry = 0;

    while (q <= n)
    {
        track = 0;
        carry = 0;

        while (track < len)
        {
            int value=arr[track] * q + carry;
            carry = value / 10;
            arr[track] =value % 10;
            track++;
        }
        
        while (carry != 0)
        {
            arr[len] = carry % 10;
            carry = carry / 10;
            len++;
        }
        q++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}