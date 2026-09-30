#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll n;
    cin>>n;
    if(n == 10) {
        cout<<-1<<"\n";
    }    
    else if(n < 10){
        cout<<n<<" "<<0<<"\n";
    }
    else if(n%12 == 10){
        cout<<22<<" "<<n-22<<"\n";
    }
    else{
        cout<<n%12<<" "<<((n/12)*12)<<"\n";
    }
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