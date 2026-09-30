#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

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