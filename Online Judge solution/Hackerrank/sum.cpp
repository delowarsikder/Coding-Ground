#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max_sum=0;
    int i,j,k,l;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            int sum=0;
            for(k=i; k<i+3; k+=2)
            {
                for(l=j; l<j+3; l++)
                {
                    cout<<k<<"-"<<l<<" ";
                }
            }
            cout<<endl<<k-3<<"-"<<l-2 <<endl;
        }
    }


    return 0;
}
