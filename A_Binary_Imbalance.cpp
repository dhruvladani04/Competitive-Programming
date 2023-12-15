#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        string s, res = "NO";
        cin>>n;
        cin>>s;
        for(ll i = 0 ; i < n ; i++) {
            if(s[i] == '0') {
                res = "YES";
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;     
}