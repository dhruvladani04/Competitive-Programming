#include <bits/stdc++.h>
using namespace std; 
vector<int>v[101];
int b[100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,a,c;
        cin>>n;
		for(i=1;i<=100;i++)v[i].clear();
		for(i=0;i<n;i++)
		{
			cin>>a;
			v[a].push_back(i);
		}
		c=0;
		for(i=1;i<=100;i++)
		{
			for(j=0;j<v[i].size();j++)
			{
				if(j==0)b[v[i][j]]=min(c,1)+1;
				else b[v[i][j]]=min(c,1)+2;
			}
			if(v[i].size()>1)c++;
		}
		if(c<2)
		{
			cout<<"-1\n";
			continue;
		}
		for(i=0;i<n;i++)cout<<b[i]<<' ';
		cout<<'\n';
    }
    return 0;
}

