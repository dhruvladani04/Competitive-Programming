#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin >> t;
    while(t>0){
        long long a,b,c;
        cin >> a >> b >> c;
        int mn = min({a,b,c});
        bool pos = true;
        int cnt=0;
        if(a%mn!=0 || b%mn!=0 || c%mn!=0)
        pos=false;
        while (a!=mn)
        {
            if(a%mn!=0 || cnt>3)
            {
                pos=false;
                break;
            }
            a-=mn;
            cnt++;
        }
        while (b!=mn)
        {
            if(b%mn!=0 || cnt>3)
            {
                pos=false;
                break;
            }
            b-=mn;
            cnt++;
        }
        while (c!=mn)
        {
            if(c%mn!=0 || cnt>3)
            {
                pos=false;
                break;
            }
            c-=mn;
            cnt++;
        }
        if(cnt>3)
        pos=false;
        if(pos)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        t--;
    }
}