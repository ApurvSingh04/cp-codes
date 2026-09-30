#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> a(n);
        unordered_set<long long> s;

        for(int i = 0; i < n; ++i){
            cin >> a[i];
            s.insert(a[i]);
        }
        bool found = false;
        for(int i = 0; i < n; ++i){
            if(s.count(a[i] + k)){
                found = true;
                break;
            }
        }
        cout<<(found?"YES":"NO")<<'\n';
    }

    return 0;
}
