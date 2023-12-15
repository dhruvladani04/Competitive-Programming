#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
cin>>z;
while(z--)
{
  int p;
  cin>>p;
  int n=2*p;
  vector<int>v(n,0);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int count=0;
  for(int i=1;i<p;i++)
  {
    count+=abs(v[i]-v[i-1]);
  }
  for(int i=p+1;i<n;i++)
  {
    count+=abs(v[i]-v[i-1]);
 
  }
  int pt=0;
  
  cout<<count<<endl;
  
  for(int i=0;i<p;i++)
  {
    cout<<v[i]<<" "<<v[n-i-1]<<endl;
  }
  
}
}
