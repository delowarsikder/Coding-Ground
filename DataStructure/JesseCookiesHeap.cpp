#include <bits/stdc++.h>
using namespace std;

/*
Sample input:
6 9
2 7 3 6 4 6
Sample output:
20 24
*/

void checkGreater(vector<int> arr)
{

}

int left(int i)
{
    return (2 * i + 1);
}

int right(int i)
{
    return (2 * i + 2);
}

void minHeapify(vector<int> &arr, int n, int loc)
{
    int l = left(loc);
    int r = right(loc);
    int lowest = loc;

    if (l < n && arr[l] < arr[lowest])
    {
        lowest = l;
    }
    if (r < n && arr[r] < arr[lowest])
    {
        lowest = r;
    }
    if (lowest != loc)
    {
        swap(arr[lowest], arr[loc]);
        minHeapify(arr, n, lowest);
    }
}

int sumUpTwo(vector<int> &arr, int n, int i)
{
    arr[0] = arr[0] * i;
    swap(arr[0], arr[n - 1]);

    return n - 1;
}

int cookies(int k, vector<int> A)
{
    int _size = A.size();
    // create min heap
    for (int i = _size / 2; i >= 0; i--)
    {
        minHeapify(A, _size, i);
    }

    cout << "print array" << endl;
    for (int i = 0; i < _size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    // combind two
    int reduceSize = _size - 1;
    // for(int i=0;i<_size;i++){
    // if(A[reduceSize])
    for (int j = 1; j <= 2; j++)
    {
        reduceSize = sumUpTwo(A, _size, j);
    }
    // }

    return 0;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int result = cookies(k, A);
    cout << "Ans: " << result << endl;

    return 0;
}
