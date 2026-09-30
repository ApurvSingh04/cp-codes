#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }   

    sort(a.begin(), a.end());

    int cnt = 1;
    int i=n-2;
    bool ans=false;
    int mx=a[n-1];

    while(i>=0){
        while(i>=0 && a[i]==mx){
            cnt++;
            i--;
        }
        if(cnt%2==0 && cnt>=2){
            ans=true;
            break;
        }
        while(i>=0 && a[i+1]-a[i]<=k){
            cnt++;
            i--;
        }
        if(cnt%2==0 && cnt>=2){
            ans=true;
            cnt=1;
            i--;
        } 
        
    }
    if(cnt%2==0 && cnt>=2) ans=true;

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