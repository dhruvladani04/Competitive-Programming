#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        if(s[0]!='9')
        {
            for(int i=0;i<n;i++)
            {
                int x=s[i]-'0';
                int y=9-x;
                ans+=y+'0';
            }
        }
        else
        {
            int c=0;
            for(int i=n-1;i>=0;i--)
            {
                int x=s[i]-'0';
                x+=c;
                if(x>1)
                {
                    int y=11-x;
                    c=1;
                    ans+=(y+'0');
                }
                else
                {
                    c=0;
                    int y=1-x;
                    ans+=y+'0';
                }
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<endl;
    }
}