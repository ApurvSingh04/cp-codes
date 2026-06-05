#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,y,z,k;
    cin>>x>>y>>z>>k;
    vector<long long> factors;
    for (long long i=1;i*i<=k;i++) {
        if (k%i==0) {
            factors.push_back(i);
            if (i!=k/i) {
                factors.push_back(k/i);
            }
        }
    }

    long long ans=0;
    for (long long a : factors){
        if(a>x) continue;
        for (long long b : factors){
            if(b>y) continue;
            if(k%(a*b) != 0) continue;
            long long c=k/(a*b);
            if(c>z) continue;
            long long count=(x-a+1)*(y-b+1)*(z-c+1);
            ans=max(ans,count);
        }
    }

    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
