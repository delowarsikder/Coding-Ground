#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0,odd=0,neg=0,pos=0;
    for(int i=1; i<=n; i++)
    {
        int m;
        cin>>m;
        if(m>0)//positive
        {
            pos++;
        }
        else if (m<0) //negative
        {
            neg++;
        }
        if(!(m&1)) //even
        {
            even++;
        }
        else //odd
        {
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}


