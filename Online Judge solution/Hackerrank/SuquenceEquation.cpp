#include <bits/stdc++.h>
using namespace std;
/*
5
5 2 1 3 4
*/
vector<int> permutationEquation(vector<int> p)
{
    vector<int>ans;
    map<int,int>all;

    for(size_t i=0; i<p.size(); i++)
    {
        all[p[i]]=i+1;
    }
    for(auto a=all.begin(); a!=all.end(); a++)
    {
//        cout<<(*a).first<<" "<<(*a).second<<endl;

        for(size_t k=0; k<p.size(); k++)
        {
            if((*a).second==p[k])
            {
//                cout<<k+1<<endl;
                ans.push_back(k+1);
            }
        }
    }

    return ans;
}

int main()
{
    int tc;
    cin>>tc;
    vector<int>arr;
    while(tc--)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int> res= permutationEquation(arr);
    for(auto r:res)
    {
        cout<<r<<endl;
    }

    return 0;
}
