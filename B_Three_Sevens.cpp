#include <bits/stdc++.h>
using namespace std; 
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define fo(i,a,b) for(ll i=a; i<=b; i++)
void solve()
{
    ll m; cin>>m;
    map<ll,vll>mp;
    fo(i,0,m-1){
        ll n; cin>>n;
        fo(j,0,n-1) {
            ll a; cin>>a;
            mp[i].pb(a);
        }
    }
 
    vll ans(m);
    vll done(50001);
 
    for(int i=m-1; i>=0; i--){
        for(auto k:mp[i]) {
            if(!done[k]){
            ans[i]=k;
            done[k]=1;
            }else done[k]=1;
        }
    }
 
    for(auto x:ans) {
        if(!x) 
    {
        cout<<-1<<endl;
        return;
    }
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}
 
 
int main(){
    ll t;
    cin>>t;
    for(int i=1; i<=t; i++){
       solve();
    }
    return 0;
}