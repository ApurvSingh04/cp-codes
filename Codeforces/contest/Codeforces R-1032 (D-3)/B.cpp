#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int n;
    cin>>n>>s;
    unordered_set<char>set;
    bool possible=false;
    for(int i=0;i<n-1;i++){
        if(set.find(s[i])!=set.end()){
            possible=true;
            break;
        }
        else set.insert(s[i]);
    }
    set.clear();
    for(int i=n-1;i>0;i--){
        if(set.find(s[i])!=set.end()){
            possible=true;
            break;
        }
        else set.insert(s[i]);
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