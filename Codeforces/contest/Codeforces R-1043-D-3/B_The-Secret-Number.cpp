#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin>>n;
    ll k=11;
    vector<ll> ans;  
    
    for(int k=11; k<=n; k=(k-1)*10+1){
        if(n%k ==0){
            ans.push_back(k);
        }
    }

    if(ans.size()==0){
        cout<<0<<endl;
        return;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;          
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}