#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>S(n);
    for(int i=0;i<n;i++) cin>>S[i];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=S[i];
        if(S[i]==0) sum+=1;
    }

    cout<<sum<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}