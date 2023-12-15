#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
   {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        map<char,int>mpp,tmp;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=97)
            {
                mpp[s[i]]++;
            }
            else{
                tmp[s[i]+32]++;
            }
 
        }     
 
        int ans=0;
        for(char i='a';i<='z';i++)
        {
            ans+=min(mpp[i],tmp[i]);
            int diff=abs(mpp[i]-tmp[i]);
            ans+=min(diff/2,k);
            k-=min(k,diff/2);
        }  
        cout<<ans<<endl;
   }
 
int32_t main()
{
   int T;
   cin >> T;
   while (T--)
   {
    solve();  
               
   }
   return 0;
}