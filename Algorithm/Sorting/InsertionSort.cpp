//insertion sort

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[100];
    int n;
    cout << "Enter no of Array Element:" << endl;
    cin >> n;

    cout << "Enter the array " << n << " element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //sorting using insertion sort algorithm

    for (int i = 1; i < n; i++)
    {
        int min_element = arr[i];
        int j = i - 1;
        while (min_element < arr[j] && j > 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        j++;
        arr[j] = min_element;
    }

    cout << "sorted array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
