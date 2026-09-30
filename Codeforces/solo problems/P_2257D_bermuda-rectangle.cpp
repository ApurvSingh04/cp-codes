#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll S;
    int  q;
    cin>>S>>q;

    vector<ll> points;
    for(int a=1; a*a<=S; a++){
        if(S%a==0){
            points.push_back(a);
            if(a*a!=S) points.push_back(S/a);
        }
    }

    sort(points.begin(), points.end());

    vector<ll> prefix(points.size());
    prefix[0] = S/points[0];
    for(int i=1; i<points.size(); i++){
        prefix[i] = prefix[i-1] + ((points[i]-points[i-1])*(S/points[i]));
    }

    for(int i=0; i<q; i++){
        ll x,y;
        cin>>x>>y;
        x = min(x,S);
        y = min(y,S);
    }
    
    

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