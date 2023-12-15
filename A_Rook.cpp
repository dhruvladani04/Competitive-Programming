#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char col=s[0];
        int row=s[1];
        for(int i=49;i<=56;i++)
        {
            if(i==int(s[1]))
            continue;
            cout<<s[0]<<char(i)<<" ";
        } 
        for(int i=97;i<=104;i++)
        {
            if(i==int(s[0]))
            continue;
            cout<<char(i)<<s[1]<<" ";
        }
    }
    return 0;
}