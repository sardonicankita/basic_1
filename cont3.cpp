#include<bits/stdc++.h>
using namespace std;

string conversion( string p, string a){
    if(a=="AM"){
        if(p[0]=='1' && p[1]=='2'){
            p[0]=0;
            p[1]=0;
            return p;
    }
    }else if(p[0]=='1' && p[1]=='2'){
            } else {
          p[0]=p[0]+1;
          p[1]=p[1]+2;
        }
        return p;
    }


int main(){
    int t;
    cin>>t;
 while(t--){
    string p,a;
    cin>>p>>a;
    string chef_time= conversion(p,a);
    string friend_1;
    string friend_2;
    vector<string>ans1;
    vector<string>ans2;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string b,c,d,e;
        cin>>b>>c>>d>>e;
        friend_1=conversion(b,c);
        ans1.push_back(friend_1);
        friend_2= conversion(d,e);
        ans2.push_back(friend_2);
    }
    for(int i=0; i<n; i++){
        if(ans2[i]>=ans1[i]){
            if(chef_time>=ans1[i] && chef_time<=ans2[i]){
                cout<<"1";
            } else cout<<"0";
        }
    }
    cout<<endl;
 }
 return 0;
}
