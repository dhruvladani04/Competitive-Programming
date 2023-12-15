#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        map<int,int> mp;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        if(mp.size()>=3)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(mp.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(auto it:mp)
        v.push_back(it.second);
        abs(v[0]-v[1])>=2?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}