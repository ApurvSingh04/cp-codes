#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    int splits=0;
    for(int i=0;i<n;i++){
        splits+=(a[i]-1);
    }
    if(splits%2==0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
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