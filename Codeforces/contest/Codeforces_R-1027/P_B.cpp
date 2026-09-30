#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin>>n>>k>>s;
        int z = 0, o = 0;
        for (char c : s) {
            if (c == '0') ++z;
            else ++o;
        }
            
        int badpairs = n/2-k;
        int rem_z = z - badpairs;
        int rem_o = o - badpairs;

        cout<<(rem_z>=0 && rem_o>=0 && rem_z%2==0 && rem_o%2==0?"YES\n" : "NO\n");
    }
    return 0;
}
