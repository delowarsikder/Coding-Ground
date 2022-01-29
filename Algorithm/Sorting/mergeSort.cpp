//merger sort
#include <bits/stdc++.h>
using namespace std;
#define pf1(x) printf("%d ", x);
#define sc1(x) printf("%d ", &x);
#define print(x) printf(#x)

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int L[n1], R[n2];
    int i, j, k;
    //insert left sub array;
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    //insert Right sub array
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
    //merger
    i = 0;
    j = 0;
    //first array alreay merge
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copy remianing element of L
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    //copy remianing element of R
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int printArray(int a[], int n)
{
    cout << " array : " << endl;
    for (int i = 0; i < n; i++)
    {
        pf1(a[i]);
    }
    cout << endl;
}

int main()
{ /*
    cout << "Enter the no of element:" << endl;
    cin >> n;
    cout << "Enter " << n << " no element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }*/

    //test the get input correctly
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    //split the array
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);
}