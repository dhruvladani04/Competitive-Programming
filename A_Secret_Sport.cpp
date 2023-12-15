#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a_wins = 0, b_wins = 0;
        int x = 0, y = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                a_wins++;
            } else {
                b_wins++;
            }

            if (a_wins >= x && a_wins > b_wins) {
                x = a_wins;
            } else if (b_wins >= y && b_wins > a_wins) {
                y = b_wins;
            }
        }

        if (x > y) {
            cout << "A\n";
        } else if (y > x) {
            cout << "B\n";
        } else {
            if (a_wins > b_wins) {
                cout << "A\n";
            } else if (b_wins > a_wins) {
                cout << "B\n";
            } else {
                cout << "?\n";
            }
        }
    }

    return 0;
}


