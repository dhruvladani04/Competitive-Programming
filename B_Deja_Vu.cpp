#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vll v(n),q(m);
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<m;i++)
    cin>>q[i];
    map<ll,ll> mp;
    for(int k=0;k<m;k++)
    {
        if(mp[q[k]])
        continue;
        ll j=q[k];
        for(int i=0;i<n;i++)
        {
            ll pp=(ll)pow(2,j);
            if(v[i]%pp==0)
            {
                ll x=pow(2,j-1);
                v[i]+=x;
            }
        }
        mp[q[k]]=1;
    }
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}