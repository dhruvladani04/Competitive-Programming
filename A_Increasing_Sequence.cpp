#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{   
    ll t;
    cin>>t;
    while(t--) {
        ll n,cnt = 1,b;
        cin>>n;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>b;
            if(b == cnt) {
                cnt++;
            }
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;     
 }