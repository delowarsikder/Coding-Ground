#include <iostream>
using namespace std;

//{0,1,2,3,4,5,6}
int arr[] = {-2,0,1,2, 3, 5, 7};
int _size = sizeof(arr) / sizeof(int);

int magicNumber()
{
    // check the left side
    int result= -1;
    int left = 0, right = _size;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == mid)
        {
            result= mid;
            right = mid;
        }
        else if (mid < arr[mid])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return result;
}

int main()
{
    int magic = magicNumber();
    cout << "Magic Number: " << magic << endl;
    return 0;
}