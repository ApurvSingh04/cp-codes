#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll numOps(int x, const vector<int>& a){
    ll ops = LLONG_MAX;
    for(int i=0; i<a.size()-1; i++){
        ll tempops = 0;
        int j=i;
        while(j<(int)a.size() && a[j] < x-(j-i)) {
            tempops+=(x-(j-i)-a[j]);
            j++;
        }
        if(j != a.size()) {
            ops = min(ops, tempops);
        }
    }
    return ops;
}

void solve() {
    int n;
    int k;
    cin>>n>>k; 
    vector<int> a(n,0);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    ll mx = *max_element(a.begin(), a.end());
    ll ans = mx;
    ll low = mx, high = mx + k;
    while(low <= high) {
        ll mid = (high-low)/2 + low;
        if(numOps(mid, a) <= k){
            low = mid+1;
            ans = mid;
        }
        else high = mid-1;
    }

    cout<<ans<<"\n";
    return;
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