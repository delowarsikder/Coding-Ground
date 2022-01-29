#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{
    FastIO;
    int n;
    cin>>n;
    double sum=0;
    double x;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<setprecision(12)<<fixed<<sum/n<<endl;
//    printf("%0.12lf\n",sum/n);

    return 0;
}

