#include<bits/stdc++.h>
using namespace std;


void op(vector<int>&a,int n,long long &ans){
    vector<int>count(n+1,0);
    int mx=0;
    for(int i=0;i<n;i++){
        ans+=a[i];
        count[a[i]]++;
        if(count[a[i]]>=2) mx=max(a[i],mx);
        a[i]=mx;
    }
}
void solve(){
    long long ans=0;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    op(a,n,ans);
    op(a,n,ans);
    for(int i=0;i<n;i++){
        ans+=(long long)(n-i)*a[i];
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
    