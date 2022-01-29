#include <iostream>

using namespace std;
bool isPalindrome(int x)
{
    if(x<0)
    {
        return false;
    }
    else
    {
        int temp=x;
        int ans=0;
        while(x!=0)
        {
            int n=x%10;
            ans=ans*10+n;
            x=x/10;
        }
        if(temp==ans)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

int main()
{
    cout<<isPalindrome(1201)<<endl;

    return 0;
}

