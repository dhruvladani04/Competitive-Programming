#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> weights(n);
        for (ll i = 0; i < n; i++) 
        {
            cin >> weights[i];
        }
        sort(weights.begin(), weights.end());
        ll maxDiff = 0;
        for (ll k = 1 ; k <= n; k++) 
        {
            ll diff = weights[n - k] - weights[k - 1];
            maxDiff = max(maxDiff, diff);
        }
        cout << maxDiff << endl;
    }
    return 0;
}
