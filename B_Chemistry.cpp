#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--) 
    {
    int n, k;
    cin>>n>>k;
    string s;
    cin >> s;
 
    unordered_map<char, int> charFrequency;
    for (char c : s) {
        charFrequency[c]++;
    }
 
    int odd_freq = 0;
    for (const auto& pair : charFrequency) {
        if (pair.second % 2 == 1) {
            odd_freq++;
        }
    }
    if(odd_freq-1==k || odd_freq==k || odd_freq<k) 
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}

