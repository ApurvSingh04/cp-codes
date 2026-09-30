#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve() {
    ll s,k,m;
    cin>>s>>k>>m;
    int val=0;
    if(s<=k) val=s-(m%k);
    else {
        if((m/k) % 2==0) {
            val=s-(m%k);
        }
        else val=k-(m%k);
    }

    if(val>0) cout<<val<<endl;
    else cout<<0<<endl;
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