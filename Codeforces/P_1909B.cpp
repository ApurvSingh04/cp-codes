#include<bits/stdc++.h>
using namespace std;

bool isdualModArr(long long arr[], int n, long long k) {
    unordered_map<long long, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]%k]++;
        if(mp.size() > 2) {
            return false;
        }
    }
    return mp.size()==2? true : false;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long k = 2;
        while(k <= 1000000000000000000) {
            if(isdualModArr(a, n, k)) {
                cout <<k<< endl;
                break;
            }
            k*=2;
        }
    }
    return 0;
}