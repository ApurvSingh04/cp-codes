#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> last(n + 1, -1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            last[a[i]] = i;
        }

        int partitions = 0;
        int right_bound = 0;
        for (int i = 0; i < n; i++) {
            right_bound = max(right_bound, last[a[i]]);
            if (i == right_bound) {
                partitions++;
            }
        }
        cout<<partitions<<endl;

    }
    return 0;
}