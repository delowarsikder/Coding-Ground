#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,c,m;
        cin>>n>>c>>m;

        int total_chocolate=n/c;
        int wraper=n/c;
        while (wraper>=m)
        {
            total_chocolate+=wraper/m;
            wraper=(wraper/m)+(wraper%m);
        }
        cout<<total_chocolate<<endl;
    }
    return 0;
}