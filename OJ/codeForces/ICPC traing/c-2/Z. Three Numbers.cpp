///tle
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,s;
    int cnt=0;
    cin>>k>>s;
    for(int x=0;x<=s;x++){
        for(int y=0;y<=s;y++){
            for(int z=0;z<=s;z++){
              if((x+y+z)==s)  {
                cnt++;
              }
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
