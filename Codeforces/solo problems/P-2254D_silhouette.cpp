#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin>>n;
    vector<ll> b(n);
    map<ll,ll> freq;

    for(ll i=0; i<n; i++){
        cin>>b[i];
        freq[b[i]]++;
    }

    vector<ll> vals;
    for(auto it : freq) {
        vals.push_back(it.first);
    }

    if(vals[0] != 0){
        cout<<-1<<"\n";
        return;
    }
    
    map<ll,ll> ansMap;
    ll prevA = 0;

    for(size_t i=0; i<vals.size();i++){
        ll cur = vals[i];
        if(i==(size_t)vals.size()-1){
            ansMap[cur] = prevA + 1;
        }
        else{
            ll next = vals[i+1];
            ll count = freq[cur];
            if((next-cur)%count != 0){
                cout<<-1<<"\n";
                return;
            }
            ll x = (next-cur)/count;
            if(x <= prevA){
                cout<<-1<<"\n";
                return;
            }
            ansMap[cur] = x;
            prevA = x;
        }   
    }

    for(ll i=0; i<n; i++){
        cout<<ansMap[b[i]]<<" ";
    }
    cout<<"\n";
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