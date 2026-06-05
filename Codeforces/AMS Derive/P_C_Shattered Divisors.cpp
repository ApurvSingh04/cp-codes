

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
           
    int K,M;
    cin>>K;
    
    bool oddE_flag=false;
    for(int i=0;i<K;i++){
        ll P,E;
        cin>>P>>E;
        if(E%2!=0) oddE_flag=true;
    }

    cin>>M;
    ll sum_e=0;
    for(int i=0;i<M;i++){
        ll p,e;
        cin>>p>>e;
        sum_e+=e;
    }

    if(oddE_flag) cout<<"Alice\n";
    else if(sum_e%2!=0) cout<<"Alice\n";
    else cout<<"Bob\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}