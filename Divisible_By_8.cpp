#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int len;
        cin >> len;
        string n;
        cin >> n;
        if(len==1){
            cout<<8<<endl;
        }
        // Check if the last three digits are divisible by 8
        else{
        int last_three_digits = (n[len - 3] - '0') * 100 + (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
        if (last_three_digits % 8 == 0) {
            cout << n << endl;
        } else {
            // If not divisible by 8, find the minimum change needed
            bool found = false;
            for (int i = 0; i < len - 2; i++) {
                int num = (n[i] - '0') * 100 + (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
                if (num % 8 == 0) {
                    n[i] = '8';
                    found = true;
                    break;
                }
            }

            if (found) {
                cout << n << endl;
            } else {
                cout << -1 << endl;  // If no change is possible
            }
        }
        }

    }

    return 0;
}

