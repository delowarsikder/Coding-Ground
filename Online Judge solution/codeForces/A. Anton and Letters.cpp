#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s="{a, b, c}";
    getline(cin,s);
    set<char>uni_char;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            uni_char.insert(s[i]);
        }
    }
    cout<<uni_char.size()<<endl;
    return 0;
}
