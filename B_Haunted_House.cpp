#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(int tc)
{
    int n;
    cin>>n;
    vector<int> v;
    string s;
    cin>>s;
    int zero=0,one=0,k=n;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            zero++;
            v.push_back(i+1);
        }
        else
        {
            if(one==0)
            k=i;
            one++;
        }
    }
    if(zero==0 && n==1)
    {
        cout<<-1<<endl;
        return;
    }
    int pos;
    for(int i=0;i<zero;i++)
    {
        if(i==0)
        {
            pos=n-v[i];
            cout<<pos<<' ';
            n--;
        }
        else{
            int temp=pos+(n-v[i]);
            pos=temp;
            cout<<pos<<' ';
            n--;
        }
    }
    for(int i=0;i<one;i++)
    cout<<-1<<' ';
    cout<<endl;
}
int32_t main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve(t);
    }
    return 0;
}