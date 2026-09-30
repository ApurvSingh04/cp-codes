#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    string ans="";
    bool isbad=false;
    int mxlen=1;
    int l1=1; 
    int l2=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) {
            l1++;
            l2=1;
        }
        else if(a[i]<a[i-1]) {
            l2++;
            l1=1;
        }
        mxlen=max(max(l1,l2),mxlen);

        if(mxlen>4) {
            isbad=true;
            break;
        }
    }
    if(isbad){
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
    }
    else ans=string(n, 'L');
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