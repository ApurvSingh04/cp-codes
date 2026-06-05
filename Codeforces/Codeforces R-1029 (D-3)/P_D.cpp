#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        long long numL =n*a[n]-a[1];
        long long numR =n*a[1]-a[n];
        long long d = (long long)n*n-1;

        if(numL%d != 0 || numR%d != 0){
            cout << "NO\n";
            continue;
        }

        long long l = numL/d;
        long long r = numR/d;

        if(l < 0 || r < 0) {
            cout << "NO\n";
            continue;
        }

        bool valid = true;
        for(int i = 1; i <= n; i++){
            long long expected = l*i + r*(n-i+1);
            if (a[i] != expected) {
                valid = false;
                break;
            }
        }

        cout <<(valid?"YES\n":"NO\n");
    }
    return 0;
}
