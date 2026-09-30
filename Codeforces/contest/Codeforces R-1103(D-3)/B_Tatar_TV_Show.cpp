#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool ans=true;

    for(int i=0;i<n-k;i++){
        if(s[i]=='1'){
            if(i+k<=n-1){
                s[i+k]= (s[i+k]=='1')?'0':'1';
                s[i]='0';
            }
        }
    } 

    for(int i=0;i<n;i++) {
        if(s[i]=='1') ans=false;
    }

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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