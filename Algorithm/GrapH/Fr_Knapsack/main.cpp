#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>v(1000);
priority_queue<pair<double,int>>pq;

int main()
{
    freopen("input.txt","r",stdin);
    int itemNo;
    cout<<"Enter number of item :"<<endl;
    cin>>itemNo;
    int w,p;
    for(int i=1; i<=itemNo; i++)
    {
        cin>>w>>p;
        v[i]=(make_pair(w,p));
    }
    for (int i=1; i<=itemNo; i++)
    {
        cout<<"item : "<<i<<" weight :"<<v[i].first<<"  price :"<<v[i].second<<endl;
    }

    double unit_profit=0;
    for (int i=1; i<=itemNo; i++)
    {
        unit_profit=(float)(v[i].second/v[i].first);
        pq.push(make_pair(unit_profit,i));
    }
    double totalProfit=0;
    cout<<"Enter size of Knapsack :"<<endl;
    int knapsack;
    cin>>knapsack;
    int itemWeight;
    while(!pq.empty() && knapsack!=0)
    {
        pair<double,int>frt=pq.top();
        pq.pop();
        itemWeight=v[frt.second].first;
        if(knapsack>=itemWeight)
        {
            totalProfit+=v[frt.second].second;
            cout<<"Select item :"<<frt.second<<" weight :"<<v[frt.second].first<<" profit :"<<v[frt.second].second<<endl;
            knapsack=knapsack-itemWeight;
        }
        else
        {
            totalProfit+=knapsack*frt.first;
            cout<<"Select item :"<<frt.second<<" weight :"<<knapsack<<" profit :"<<knapsack*frt.first <<" Fraction :"<<knapsack<<"/ "<<itemWeight<<endl;
            break;
        }
    }
    cout<<"Total profit :"<<totalProfit<<endl;
}
