#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll t;
    cin>>t;
    while(t--) {
        ll n,k,x;
        cin>>n>>k>>x;
        ll min_sum = (k * (k+1))/2;
        ll total_sum = (n * (n+1))/2;
        ll max_sum = total_sum - ((n-k) * (n-k+1))/2;
        if(x >= min_sum and x <= max_sum)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;     
 }