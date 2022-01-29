#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
//    freopen("Number Spiral.txt","r",stdin);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll row,col;
        cin>>row>>col;
        //logic
        //check 1,3,9
        if(row==1 && (col%2!=0))//odd square
        {
          //  cout<<row<<" "<<col<<" : ";
            cout<<col*col<<endl;
        }
        //check 4,16
        else if(col==1 && (row%2==0))
        {
         //   cout<<row<<" "<<col<<" : ";
            cout<<row*row<<endl;
        }
        //calculate
        else
        {
            if(row>=col)//Ex.row=3,col=1,2,3
            {
                if(row%2==0)//even no row
                {
      //                    cout<<row<<" "<<col<<" : ";
                    cout<<row*row+1-col<<endl;//15,14,13
                }
                else //row no odd
                {
      //                    cout<<row<<" "<<col<<" : ";
                    ll result=(row-1)*(row-1)+1;//17
                    cout<<result+col-1<<endl;//17 18 19 20 21
                }
            }
            else //row=2 ,col=3,4.........
            {
                if(col%2!=0) //row =any ,col=1,3,5........
                {
//      //                    cout<<row<<" "<<col<<" : ";
                    ll result=col*col;
                    cout<<result-row+1<<endl;
                }
                else//row=any ,col=2,4,6.........
                {
      //                    cout<<row<<" "<<col<<" : ";
                    ll res=(col-1)*(col-1)+1;
                    cout<<res+row-1<<endl;
                }
            }

        }

    }


    return 0;
}
