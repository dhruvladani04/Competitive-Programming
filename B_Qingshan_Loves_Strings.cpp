#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define sortarr sort(arr,arr+n)
#define sortav sort(v.begin(),v.end())
#define MOD 1000000007 
using namespace std;
void solve(){
 int n,m;
 cin>>n>>m;
 string s,t;
 cin>>s>>t;
 int s1=0,t1=0;
 int flag=0;
 for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        s1++;
    }
 }
 for(int i=0;i<m;i++){
    if(t[i]==t[i+1]){
        t1++;
    }
 }
 if(t1!=0&&s1!=0){
    cout<<"No"<<endl;
 }
 else if(t1!=0&&s1==0){
    cout<<"Yes"<<endl;
 }
 else if(t1==0&&s1==0){
    cout<<"Yes"<<endl;
 }
 
 else{
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            char x=s[i];
          if(x==t[0]||x==t[m-1]){
            flag++;
          }
        }
    }
        if(flag!=0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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