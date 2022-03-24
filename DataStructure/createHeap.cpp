#include <iostream>
#include <string.h>
#define mx 100000

using namespace std;

int left(int i)
{
    return 2 * i + 1;
}
int right(int i)
{
    return 2 * i + 2;
}
int parent(int i)
{
    return (i - 1) / 2;
}

void printHeap(int arr[], int n)
{
    static int k = 0;
    // cout << "iteration :" << ++k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void MinHeap(int arr[], int item, int n)
{
    int i = n - 1;
    int p = parent(i);
    while (i > 0 && item < arr[p])
    {
        swap(arr[i], arr[p]);
        item = arr[p];
        i = p;
        p = parent(p);
    }
    // printHeap(arr, n);
}

void minHeapify(int arr[], int n, int pos)
{
    int l = left(pos);
    int r = right(pos);
    int lowest = pos;

    if (l < n && arr[l] < arr[lowest])
    {
        lowest = l;
    }
    if (r < n && arr[r] < arr[lowest])
    {
        lowest = r;
    }
    if (lowest != pos)
    {
        swap(arr[pos], arr[lowest]);
        minHeapify(arr, n, lowest);
    }
}

int deleteAnyElementHeap(int arr[], int n, int loc)
{
    int Val = arr[loc];
    n = n - 1;
    swap(arr[loc], arr[n]);
    for (int i = n / 2; i >= 0; i--)
    {
        minHeapify(arr, n, i);
    }
    return n;
}

int deleteMinElementHeap(int arr[], int n, int loc)
{
    int minVal = arr[0];
    swap(arr[0], arr[n - 1]);
    minHeapify(arr, n - 1, 0);
    cout << "min val: " << minVal << endl;
    return n - 1;
}

int searchElement(int arr[], int item, int n)
{
    // cout<<"item :"<<item<<endl;
    for (int i = n / 2; i >= 0; i--)
    {
        int l, r;
        l = left(i);
        r = left(i);
        if (arr[i] == item)
        {
            return i;
        }
        if (r < n && arr[r] == item)
        {
            return r;
        }
        if (l < n && arr[l] == item)
        {
            return l;
        }
    }
    return -1;
}

int insertElementHeap(int arr[], int item, int n)
{
    arr[n++] = item;
    MinHeap(arr, item, n);
    return n;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int arr[mx];
    memset(arr, -1, sizeof(arr));
    int x;
    int _size = 0;
    while (cin >> x)
    {
        if (x < 0)
        {
            break;
        }
        _size = insertElementHeap(arr, x, _size);
    }

    cout << "final min heap" << endl;
    printHeap(arr, _size);
    // cin >> x; // searching element
    // cout<<"searching element: "<<x<<endl;
    // int idx = searchElement(arr, x, _size);
    // _size = deleteAnyElementHeap(arr, _size, idx);
    // cout << "searching index: val: " << idx << " -> " << arr[idx] << endl;
    // cout << "After deletion" << endl;
    // printHeap(arr, _size);
    return 0;
}