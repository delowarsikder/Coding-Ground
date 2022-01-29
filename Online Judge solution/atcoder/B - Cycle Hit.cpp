#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    string s[4]= {"H", "2B", "3B","HR"};
    set<string>st;
    st.insert(s1);
    st.insert(s2);
    st.insert(s3);
    st.insert(s4);
    bool flag=false;
    for(int i=0; i<4; i++)
    {
        if(st.count(s[i]))
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
