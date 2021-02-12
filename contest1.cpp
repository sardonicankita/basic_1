#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
     if(n>=2 && n<=1000){
        for(int i=1; i<=10; i++){
            if(n%i==0){
                ans.push_back(i);
            }
        }
         int p= *max_element(ans.begin(), ans.end());
         cout<<p;
     }
     return 0;
}
