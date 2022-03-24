#include <iostream>
#include <vector>
using namespace std;

#define mx 100000

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
    static int i = 0;
    cout << "iteration :" << ++i << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// create a max heap
void maxHeapify(int arr[], int n, int currIdx)
{
    if (currIdx == -1)
    {
        return;
    }
    int l = left(currIdx);
    int r = right(currIdx);
    int largest = currIdx;
    if (l < n && arr[largest] < arr[l])
    {
        largest = l;
    }
    if (r < n && arr[largest] < arr[r])
    {
        largest = r;
    }
    if (largest != currIdx)
    {
        swap(arr[largest], arr[currIdx]);
        maxHeapify(arr, n, largest);
    }
    // printHeap(arr, n);
}

// call heap
void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{
    int heapSize = n;
    n--;
    for (int i = n; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        n--;
        maxHeapify(arr, n, 0);
    }
    cout << "sorted " << endl;
    printHeap(arr, heapSize);
}

int main()
{
    int arr[mx] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    // int _size = sizeof(arr) / sizeof(int);
    int _size = 11;
    buildHeap(arr, _size);

    // heap sort
    heapSort(arr, _size);

    return 0;
}