#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m,0));
    pair<int,int>center;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int l=-1,r=-1;
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'){
                if(l==-1) l=j;
                r=j;
            }
        }
        if(l!=-1){
            if(count<(r-l+1)){
                count=(r-l+1);
                center={i+1,(l+1+r+1)/2};
            }
            else break;
        }
    }
    cout<<center.first<<" "<<center.second<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}