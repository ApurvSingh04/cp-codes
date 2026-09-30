#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>a(n);
    int sum=0;
    int ones=0,zeros=0,twos=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1) ones++;
        else if(a[i]==0) zeros++;
        else if(a[i]==2) twos++;
    }
    if((s==sum || (sum<s && s-sum>1))){
        cout<<-1<<endl;
    }
    else{
        while(n--){
            if(zeros){
                cout<<0<<" ";
                zeros--;
            }
            else if(twos){
                cout<<2<<" ";
                twos--;
            }
            else if(ones){
                cout<<1<<" ";
                ones--;
            }
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}