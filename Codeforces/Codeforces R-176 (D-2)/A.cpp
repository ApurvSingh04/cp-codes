#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<vector<char>>v(4,vector<char>(4));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>v[i][j];
        }
    }
    bool possible =false;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int black=0,white=0;
            if(v[i][j]=='.') white++; 
            else black++;
            if(v[i+1][j+1]=='.') white++;
            else black++;
            if(v[i][j+1]=='.') white++;
            else black++;
            if(v[i+1][j]=='.') white++;
            else black++;
            if(black>2 || white>2){
                possible=true;
                break;
            }
        }
        if(possible) break;
    }
    if(possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
    return 0;
}
    