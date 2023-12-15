#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll x1, y1, x2, y2, x3, y3, ab = 0, ac = 0, bc = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        bc = abs(x2 - x3) + abs(y2 - y3) - 1 + 2;
        ab = abs(x2 - x1) + abs(y2 - y1) - 1 + 2;
        ac = abs(x1 - x3) + abs(y1 - y3) - 1 + 2;
        if (bc == ab + ac - 1)
            cout << 1 << endl;
        else
        {
            ll r = ab + ac - bc;
            ll p = (r - 1) / 2;
            cout << p + 1 << endl;
        }
    }
    return 0;
}