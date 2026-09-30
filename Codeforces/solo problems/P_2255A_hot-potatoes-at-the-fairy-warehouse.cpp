#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<char> a(2*n);
    for(int i=0; i<2*n; i++) {
        cin>>a[i];
    }
    vector<char> na(a);

    int score1=0, score2=0;
    for(int i=0; i < 2*n; i++) {
        int nxtI = (i+1)%(2*n);
        if(a[i]=='1' && (a[nxtI]=='0')) {
            na[nxtI]='1';
            na[i]='0';
        }
    }

    for(int i=0; i<2*n; i++) {
        if(na[i]=='1'){
            if(i%2==0) score2++;
            else score1++;
        }
    }

    cout<<score1<<" "<<score2<<"\n";
    return;
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