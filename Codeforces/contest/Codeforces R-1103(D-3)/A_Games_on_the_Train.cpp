#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }; 
    cout<<mx+1-mn<<endl;
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