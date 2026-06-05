#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int max_val = 0;

    // Input matrix and find maximum value
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            max_val = max(max_val, a[i][j]);
        }
    }

    // Identify rows and columns containing max_val
    set<int> rows, cols;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == max_val) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    // If max_val elements can be reduced
    if (rows.size() == 1 || cols.size() == 1) {
        // Confined to a single row or column
        cout << max_val - 1 << endl;
    } else {
        // Not reducible
        cout << max_val << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
