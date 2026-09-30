#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n,0);
    long long sum=0;
    long long maxnum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        maxnum=max(maxnum,a[i]);
        if(sum-maxnum==maxnum) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}