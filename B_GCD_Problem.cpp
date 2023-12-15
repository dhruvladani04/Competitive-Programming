#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n-3<<" 2 1\n";
    }
    else
    {
        n--;
        n/=2;
        if(n%2==0)
        {
            cout<<n+1<<" "<<n-1<<" 1\n";
        }
        else
        {
            cout<<n+2<<" "<<n-2<<" 1\n";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}