
#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
int cnt=0;
for(int i=l;i<=r;i++){
    for(int j=i;j<=r;j++){
        cnt=max(cnt,(i^j));
    }
}
return cnt;
}

int main()
{
    int l,r;
    cin>>l>>r;
    cout<<maximizingXor(l,r)<<endl;
    return 0;
}
