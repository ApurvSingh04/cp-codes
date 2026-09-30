#define ll long long
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    ll px,py,qx,qy;
    cin>>n>>px>>py>>qx>>qy;
    ll maxR=0;
    ll mx=0;
    ll a;
    for(int i=0;i<n;i++){
        cin>>a;
        maxR+=a;
        mx=max(mx,a);
    }
    ll minR=max(2*mx-maxR, 0LL);
    ll d=(ll) (px-qx)*(px-qx) + (py-qy)*(py-qy);
    if(d>maxR*maxR || d<minR*minR){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
    