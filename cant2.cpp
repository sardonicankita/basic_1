#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum=0;
        sort(arr, arr+n);
        sum=(arr[n-1]-arr[0]);
        int ans=0;
        for(int i=1; i<n-1; i++){
            int p= abs(arr[0]-arr[i])+abs(arr[n-1]-arr[i]);
            ans=max(ans,sum+p);
        }
        cout<<ans<<endl;
    }
    return 0;
}
