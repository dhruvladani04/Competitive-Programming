#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define fl(i,n) for(int i=0;i<n;i++)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll brr[n];
    fl(i,n)cin>>arr[i];
    fl(i,n)cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+n);
    fl(i,n)
    {
        ll d=brr[i]-arr[i];
        if(d==1||d==0)continue;
        else{
            pn return;
        }
    }
    py
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}