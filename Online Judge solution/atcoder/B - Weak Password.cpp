#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string arr;
    bool weak=false;
    cin>>arr;
    //first condition
    for(int i=1; i<4; i++)
    {
        if(arr[0]==arr[i])
        {
            weak=true;
        }
        else
        {
            weak=false;
            break;
        }
    }

    //second condition
    if(arr[0]=='9' && arr[1]=='0')
    {
        weak=true;
    }
    //
//    else{
//            for(int i=0;)
//        if((arr[i]-'0')==(arr[i+1]-'0')-1)
//    }

    //ans
    if(weak)
    {
        cout<<"Weak"<<endl;
    }
    else
    {
        cout<<"Strong"<<endl;
    }



    return 0;
}
