#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        long long n,k=__LONG_LONG_MAX__;
        long long a,b;
        vector<pair<long long , long long>> v;
        cin>> n;
        for(long long i=0;i<n;i++){
            cin>> a>>b;
            v.push_back({a,b});
        }
        for(long long i=0;i<(long long)v.size();i++){
            k=min(v[i].first+(v[i].second-1)/2,k);
        }
        cout<<k<<endl;
    }
    return 0;
}