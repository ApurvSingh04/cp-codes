#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
    int i=0;
    while(i<=n-k) {
        bool Hike=true;
        for(int j=0; j<k;j++){
            if(a[i+j] != 0){
                Hike=false;
                break;
            }
        }
        if(Hike){
            count++;
            i+=(k+1);
        } 
        else i++;
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}