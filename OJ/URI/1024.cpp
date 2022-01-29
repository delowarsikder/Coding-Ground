#include<bits/stdc++.h>
#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main()
{
//    freopen("input1024.txt","r",stdin);
//    freopen("output1024.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        /*        FastIO;*/
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        string s;
        int len=0;
        getline(cin,s);
        len=s.size();
        int l=len/2;
//first shift 3 position
        for(int i=0; i<len; i++)
        {
            if((s[i]>='A' || s[i]>='a') && (s[i]<='Z' || s[i]<='z'))
            {
                s[i]=s[i]+3;
            }
        }
        //second revers string
        for (int i=0,k=len-1; i<l; i++,k--)
        {
            int temp=s[i];
            s[i]=s[k];
            s[k]=temp;
        }

        //left shift one position
        for (int i=l; i<len; i++)
        {
            s[i]=s[i]-1;
        }
        printf("%s\n",s);

    }
    return 0;
}
