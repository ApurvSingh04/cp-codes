#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++) cin>>h[i];
    int current=h[k-1];
    sort(h.begin(),h.end());
    int i=0;
    for(i=0;i<n;i++){
        if(current==h[i]){
            break;
        }
    }
    int maxheight = *max_element(h.begin(), h.end());
    bool possible=true;
    int w=0;
    while(i<n){
        if(current==maxheight) break;
        if(current-w < h[i+1]-current){
            possible =false;
            break;
        }
        w+=(h[i+1]-current);
        current=h[i+1];
        i++;
    }
    if(possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}