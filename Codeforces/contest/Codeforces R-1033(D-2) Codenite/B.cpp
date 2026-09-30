#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    int count=0;
    for(int i=0;i<n;i++){
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        if(x==y && (dx==dy)) count++;
        if(x+y==s && (dx!=dy)) count++;
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
    