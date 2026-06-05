#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    string ans="";
    int l=0;
    int r=n-1;
    bool flag=true;
    while(l<=r){
        if(flag){
            if(a[l]<a[r]) {
                ans+="L";
                l++;
            }
            else {
                ans+="R";
                r--;
            }
            
        }
        else{
            if(a[l]<a[r]) {
                ans+="R";
                r--;
            }
            else {
                ans+="L";
                l++;
            }
        }
        flag=!flag;
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