#include <iostream>
using namespace std;

#define MAX_SIZE 100
#define EMPTY_VAL -1
#define INF 99999999
#define FOR(i, n) for (int i = 0; i < n; i++)

int memo[MAX_SIZE];
int next_index[MAX_SIZE];

void init()
{
    FOR(i, MAX_SIZE)
    {
        memo[i] = EMPTY_VAL;
        next_index[i] = EMPTY_VAL;
    }
}

int dist(int i, int a[], int n)
{
    if (memo[i] != EMPTY_VAL)
    {
        return memo[i];
    }
    int res = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > a[i])
        {
            int temp = dist(j, a, n);
            if (res < temp)
            {
                res = temp;
                next_index[i] = j;
            }
        }
    }
    memo[i] = res + 1;
    return memo[i];
}

int findLIS(int a[], int n)
{
    int result = 0;
    int start_index = EMPTY_VAL;
    FOR(i, n)
    {
        int temp = dist(i, a, n);
        if (result < temp)
        {
            result = temp;
            start_index = i;
        }
    }
    int path[MAX_SIZE];
    int k = 0;

    while (start_index != EMPTY_VAL)
    {
        path[k++] = a[start_index];
        start_index = next_index[start_index];
    }
    cout << "path: ";
    FOR(i, k)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return result;
}

int main()
{
    init();
    // int arr[] = {5, 0, 9, 2, 7, 3, 4};
    int arr[]={0,1,0,3,2,3};
    int _size = sizeof(arr) / sizeof(int);

    int ans = findLIS(arr, _size);
    cout << "Ans: " << ans << endl;
    return 0;
}
