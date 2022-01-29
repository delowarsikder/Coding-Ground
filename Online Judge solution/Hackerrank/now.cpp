#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char>ch= {'a','e','i','o','u'};
    int sum=0;
    int max_num=-1;
    string s="azerdii";
    int k=5;
    int pos=-1;
    string tem;
    for(int i=0; i<(s.length()-k+1); i++)
    {
        sum=0;
        for(int j=i; j<i+k; j++)
        {
            if(ch.find(s[j])!=ch.end())
            {
                sum++;
            }
        }
        if(sum>max_num)
        {
            max_num=sum;
            pos=i;
        }
    }
    cout<<"max :: "<<max_num<<endl;
    cout<<"pos :" <<pos<<endl;
    cout<<"value :"<<endl;
    if(max_num>0)
    {
        for(int m=pos; m<pos+k; m++)
        {
            tem=tem+s[m];
        }
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    cout<<"string "<<tem<<endl;

    return 0;
}
