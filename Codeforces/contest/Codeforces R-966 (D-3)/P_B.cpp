#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> seat(n, 0);
        for(int i=0;i<n;i++) cin>>seat[i];
        unordered_map<int,bool> filled;
        bool possible=true;
        for(int i=0;i<n;i++){
            if(i == 0) {
                filled[seat[i]]=true;
                continue;
            }
            if(filled[seat[i]-1] || filled[seat[i]+1]){
                filled[seat[i]]=true;
            } else {
                possible=false;
                break;
            }
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}