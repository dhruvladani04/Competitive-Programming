#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        n = s.length();
        int c = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s[i] == t[j]){
                    c++;
                }
            }
        }
        if(c == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}