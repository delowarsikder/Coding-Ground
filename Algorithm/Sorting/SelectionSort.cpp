#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    int n;
    cout << "Enter number of element :" << endl;
    cin >> n;
    cout << "Enter the " << n << " element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int min_loc = i;
        int min_element = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min_element)
            {
                min_element = arr[j];
                min_loc = j;
            }
        }
        swap(arr[i], arr[min_loc]);
    }

    cout << "Sorted element using Selection sort :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
