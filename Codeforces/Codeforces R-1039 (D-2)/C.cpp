#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];

    int mn=b[0];
    bool possible = true;
    for(int i=1;i<n;i++){
        if(b[i]-mn>=mn){
            possible=false;
            break;
        }
        mn=min(mn,b[i]);
    }
    if(possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}