#include<bits/stdc++.h>
using namespace std;
/**int k;
int main()
{
	cin>>k;
	for(int i=1;i<k;i++){
		cout<<i;
		for(int j=2;j<k;j++)
        {
			if((i*j)<k)
            cout<<"  "<<(i*j)%k;
			else cout<<setw(2)<<(i*j)/k<<(i*j)%k;
		}
		cout<<endl;
	}
}
Brute force Approach */

int a[10];
int get(int x, int p)
{
	int cnt=0;
	while(x) 
    {
        a[++cnt]=x%p;
        x/=p;
    }
	int res=0;
	for(int i=cnt;i;i--)
    res=res*10+a[i];
	return res;
}
 
int main()
{
	int n; 
    cin>>n;
	for (int i=1;i<n;i++)
	{
		for(int j= 1;j<n;j++ ) 
        cout<<get(i * j, n)<<" ";
		cout<<endl;
	}
	return 0;
}
// Using Radix Approach