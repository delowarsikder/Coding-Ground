#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100000

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    freopen("output.txt","w",stdout);
    ll p, q;
    ll n;
    cin >> p >> q;
    map<ll, ll> mp;
    for(ll k=1;k<mx;k++){
    ll result = k * k;
    stringstream ss;
    cout<<"Result: "<<result<<endl;
    ss << result;
    string str;
    ss >> str;
    cout<<"string: "<<str<<endl;
    ll left = 0, right = 0;
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        left = left * 10 + (str[i] - '0');
    }
    for (int j = len / 2; j < len; j++)
    {
        right = right * 10 + (str[j] - '0');
    }
    ll sum = left + right;
    mp[k] = sum;
    cout << "k: " << k << " -> sum : " << sum << endl;
    if (k == sum)
    {
        cout << "Yes" << endl;
        Sleep(5);
    }
    cout<<"Left :"<<left<<endl;
    cout<<"Right :"<<right<<endl;

    if(sum==k){
        cout<<"possible"<<endl;
    }
    else{
        cout<<"impossible"<<endl;
    }
    }
    int cnt=0;
    for(int k=p;k<=q;k++){
        if(mp[k]==k){
            cout<<k<<" ";
            cnt++;
        }
    }

    if(cnt==0){
        cout<<"INVALID RANGE"<<endl;
    }

    return 0;
}
