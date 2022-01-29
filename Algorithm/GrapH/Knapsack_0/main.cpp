#include<bits/stdc++.h>
using namespace std;

int dist[100][100]= {0};
int parent[100][100]= {0};
vector<pair<int,int>>item(100);
int knapsack;

int select_item(int totalItem,int Size)
{
    int select=parent[totalItem][Size];
    if(Size<=0)
    {
        return 0;
    }
    if(totalItem==select)
    {
        cout<<"Select Item :"<<select<<endl;
        // cout<<"Earned :"<<item[select].first<<endl;
        knapsack-=select;
        select_item(parent[totalItem-1][knapsack],knapsack);
    }
    else
    {
        select_item(parent[totalItem-1][knapsack],knapsack);
    }
}

int main()
{
    freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int totalItem;
    cout<<"Enter total item no :"<<endl;
    cin>>totalItem;
    cout<<"Enter Knapsack size :"<<endl;
    cin>>knapsack;
    cout<<"knapsack input:"<<knapsack<<endl;
    int w,p;
    cout<<"Enter item price && weight :"<<endl;
    for(int i=1; i<=totalItem; i++)
    {
        cin>>p>>w;
        item[i]=make_pair(p,w);
    }

    for(int i=1; i<=totalItem; i++)
    {
        for (int j=1; j<=knapsack; j++)
        {
            int left=0;
            int temp=0;

            if(item[i].second<=j)
            {
                temp=j-item[i].second;
                if(temp>0)
                {
                    left=dist[i-1][temp];
                }
                dist[i][j]=max(dist[i-1][j],item[i].first+left);

                if(dist[i-1][j]>item[i].first+left)
                {
                    parent[i][j]=parent[i-1][j];
                }
                else
                {
                    parent[i][j]=i;
                }

            }
            else
            {
               // dist[i][j]=max(dist[i-1][j],item[i].first);
                dist[i][j]=dist[i-1][j];
                parent[i][j]=parent[i-1][j];
            }
        }
    }
    /*  cout<<"capacity knapsack :"<<endl;
      for(int i=0; i<totalItem; i++)
      {
          for (int j=0; j<=knapsack; j++)
          {
              cout<<dist[i][j]<<" ";
          }
          cout<<endl;
      }

      cout<<"parent  knapsack :"<<endl;
      for(int i=0; i<totalItem; i++)
      {
          for (int j=0; j<=knapsack; j++)
          {
              cout<<parent[i][j]<<" ";
          }
          cout<<endl;
      }
    */

    cout<<"Maximum profit :"<<dist[totalItem-1][knapsack]<<endl;
    //cout<<" parent :"<<parent[totalItem-1][knapsack];
    select_item(totalItem-1,knapsack); //for(int i=0; i<totalItem; i++)
//    cout<<"knapsack last "<<knapsack<<endl;
    return 0;
}
