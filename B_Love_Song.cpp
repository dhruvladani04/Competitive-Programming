#include<bits/stdc++.h>
using namespace std;
#define INT long long int
int main()
{
    INT n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    map<INT,map<char,INT>> mp;
    mp[0].insert(make_pair(str[0],1));
    for (INT i = 1; i < n; ++i) 
    {
        mp[i] = mp[i-1];
        char ele = str[i];
        mp[i][ele]++;
    }
    for (INT i = 0; i < q; ++i) 
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        map<char,INT> mp1 = mp[l-1];
        map<char,INT> mp2 = mp[r];
        int count = 0;
        for(auto it:mp2)
        {
            count += (INT)(it.first - 'a'+1) * (it.second - mp1[it.first]);
        }
        cout<<count<<"\n";
    }
    return 0;
}