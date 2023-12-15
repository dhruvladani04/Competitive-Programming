#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            v[i]--;
        }
        vector<int> ds;
        for(int i=0;i<n;i++)
        {
            int d=abs(v[i]-i);
            if(d==0)
            continue;
            ds.push_back(d);
        }
        int ans=1;
        ans=ds[0];
        for(auto x:ds)
        {
            ans=__gcd(ans,x);
        }
        cout<<ans<<endl;
    }
}