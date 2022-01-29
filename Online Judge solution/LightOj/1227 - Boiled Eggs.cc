///not submit
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FastIO ios_base::sync_with_stdio(false);cin.tie(0);
vector<int>v;

int main()
{
    //FastIO;
    int cases,caseno=0;
    int n,p,q;
    int sum,egg;
    cin>>cases;
    while(cases--)
    {
        sum=0;
        egg=0;
       // v.erase(v.begin(),v.end());
        int temp;
        cin>>n>>p>>q;
        for(int i=0; i<n; i++)
        {
            cin>>temp;
            //v.push_back(temp);
            sum+=temp;
            if(sum<=q && egg<p)
            {
                egg++;
            }
        }
         printf("Case %d: %d\n",++caseno,egg);
    }
    return 0;
}
/*
2

3 2 10

1 2 3

4 5 5

4 4 5 5
*/
