#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100

int print(int *a,ll row,ll col)
{
    cout << __func__ <<endl;
//    ll row=4,col=3;
    for(int i=0; i<=row; i++)
    {
        for(int j=0; j<=col; j++)
        {
            cout<<*(a+ i*row + j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    string src="CATTCAC"; //row
    string dst="CTCGCAGC"; //col
    int ans[mx][mx];
    memset(ans,0,sizeof(ans));
    ll match=1,misMatch=-1,gap=-2;
    cout<<"Here Let : match =+1, misMatch=-1 and Gap=-2 \n You can change this value as your requirement\n"<<endl;
    cout<<"Enter String (gene seq) that will align vertical: "<<endl;
    getline(cin,src);
    cout<<"Enter String (gene seq) that will align Horizontal: "<<endl;
    getline(cin,dst);
    ll row=src.length();
    ll col=dst.length();

    for(int i=0; i<=row; i++)
    {
        for(int j=0; j<=col; j++)
        {
            ll temp=0;
            //initialization -2 .-4.. //first row  and first colum
            if(i==0 && j==0)
            {
                ans[i][j]=0;
            }
            else if(i==0)
            {
                ans[i][j]=ans[i][j-1]-2; //first row
            }
            else if(j==0)
            {
                ans[i][j]=ans[i-1][j]-2; // first column
            }
        }
    }

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            ll temp=INT_MIN;
            if(src[i-1]==dst[j-1])//src[0] dst[0]
            {
                temp=max(temp,ans[i-1][j-1]+match);
            }
            else if(dst[i-1]!=src[j-1])
            {
                temp=max(temp,ans[i-1][j-1]+misMatch);
            }
            temp=max(temp,ans[i][j-1]+gap);
            temp=max(temp,ans[i-1][j]+gap);
            ans[i][j]=temp;
        }
    }

    cout<<"\n Global Alignment Scoring matrix: \n"<<endl;

    for(int i=0; i<=col; i++)
    {
        if(i==0)
        {
            cout<<"   ";
            continue;
        }
        cout<<dst[i-1]<<" ";
    }
    cout<<endl;

    for(int i=0;i<1;i++){
        for(int j=0;j<=col;j++){
            cout<<ans[i][j]<<"  ";
        }
    }
    cout<<endl;
    for(int i=1; i<=row; i++)
    {
        cout<<endl<<src[i-1]<<" ";
        for(int j=0; j<=col; j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }

cout<<"\nfinal Ans: "<<ans[row][col]<<endl;

//    print(ans[0],l,m);

    //check

}
