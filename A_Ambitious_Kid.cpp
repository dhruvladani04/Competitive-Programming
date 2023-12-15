#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int min=abs(arr[0]);
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(abs(arr[i])<min)
        min=abs(arr[i]);
    }
    cout<<min;
    return 0;
} 