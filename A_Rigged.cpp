#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    long long t;
    cin>>t;
    while(t--) {
        long long n,polycarp_strength,polycarp_endurance,weight,strength,endurance;
        cin>>n;
 
        for(long long i = 0; i < n ; i++) {
            cin>>strength>>endurance;
            if(i == 0) {
                polycarp_strength = strength;
                polycarp_endurance = endurance;
                weight = strength;
            }
            else {
                if(strength >= polycarp_strength and endurance >= polycarp_endurance) {
                    weight = -1;
                }
            }
        }
        cout<<weight<<endl;
    }
    return 0;     
 }