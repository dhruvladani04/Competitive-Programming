#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll> v1(n+1);
    for(int i = 1; i <= n; i++){
        cin>>v1[i];
    }
    bool ans= true;
    for(int i = n; i >= 2; i--){
        if(v1[i-1] > v1[i]){
            if(((i-1)&(i-2)) != 0){
                ans = false;
                break;
            }
        }
    }
    if(ans){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
} 
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}