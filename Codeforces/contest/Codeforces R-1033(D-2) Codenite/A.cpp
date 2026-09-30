#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l1,l2,l3,b1,b2,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    bool sq=false;
    if(l1 == l2 && l2 == l3 && b1+b2+b3==l1) sq=true;
    else if(b1 == b2 && b2 == b3  && l1+l2+l3==b1) sq=true;
    else if((b1==b2+b3) && (l2==l3) && (l1+l2==b1)) sq=true;
    else if((l1==l2+l3) && (b3==b2) && (b1+b2==l1)) sq=true;
    if(sq) cout<<"YES"<<endl;
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
    