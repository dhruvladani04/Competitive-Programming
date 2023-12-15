#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        arr[0] = arr[0]+ 1;
        
        int pro = 1;
        for(int i=0;i<n;i++){
            pro*=arr[i];
        }
        cout<<pro<<endl;
    }
}
