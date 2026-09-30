#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int a,b,x;
    cin>>a>>b>>x;

    int mx=max(a,b);
    int mn=min(a,b);
    int ans=mx-mn;
    int cnt=0;

    while(mx>mn){
        ans= min(ans, cnt+(mx-mn));
        mx = mx/x;
        cnt++;
        if(mx<mn) swap(mx,mn);
    }
    ans=min(ans,cnt);

    cout<<ans<<endl;
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