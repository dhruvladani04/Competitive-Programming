#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define vout(x, v)   \
    for (auto x : v) \
        cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define forl for (int i = 0; i < n; i++)
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MODD 998244353
 
#define isortarr(arr, n) sort(arr, arr + n)
#define dsortarr(arr, n) sort(arr, arr + n, greater<int>())
#define isortvect(v) sort(v.begin(), v.end())
#define dsortvect(v) sort(v.begin(), v.end(), greater<>());
#define isortstrng(str) sort(str.begin(), str.end())
#define dsortstrng(str) sort(str.begin(), str.end(), greater<char>())
#define ltransfr(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
#define utransfr(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define ct(x) cout << x
#define cn(x) cin >> x
#define deb(x) cout << #x << "=" << x << endl
#define debb(x, y) cout << #x << "=" << x << " , " << #y << "=" << y << endl
#define cp(t) \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int zero = 0;
int32_t main()
{
    cp(t)
    {
        int n, q;
        cin >> n >> q;
        int ar[n];
        int prf[n + 2];
        prf[0] = 0;
        forl
        {
            cin >> ar[i];
            prf[i + 1] = prf[i] + ar[i] % 2;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int x = (prf[r] - prf[l - 1]) % 2;
            if (k % 2)
            {
                int tmp = r - l + 1;
                if (tmp % 2)
                {
                    if (!x)
                    {
                        cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                    }
                    else
                    {
                        cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
                    }
                }
                else
                {
                    if (x)
                    {
                        cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                    }
                    else
                    {
                        cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
                    }
                }
            }
            else
            {
                if (x)
                {
                    cout << ((prf[n] % 2) ? "NO" : "YES") << endl;
                }
                else
                {
                    cout << ((prf[n] % 2 == 0) ? "NO" : "YES") << endl;
                }
            }
        }
    }
 
    return 0;
}