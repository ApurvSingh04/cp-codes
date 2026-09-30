#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n, m;
    cin>>n>>m;
    vector<int> stabilityIndex(n);
    for(int i=0; i<n; i++){
        cin>>stabilityIndex[i];
    }

    vector<vector<int>> arr(n, vector<int>(m));
    int ans = m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<m; j++){
        }
    }
    cout<<ans<<"\n";

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