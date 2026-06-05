#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
dp[i][prev]= best answer starting from column i with previous row = prev
 */
ll solve(vector<vector<ll>>& h, vector<vector<ll>>& dp,int i, int prev) {
    if(i==h[0].size()) return 0;
    if(dp[i][prev]!=-1) return dp[i][prev];
    ll ans=solve(h,dp,i+1,prev);
    if(prev!=0){
        ans=max(ans,h[0][i]+solve(h,dp,i+1,0));
    }
    
    if(prev!=1){
        ans=max(ans,h[1][i]+solve(h,dp,i+1,1));
    }

    return dp[i][prev]=ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<vector<ll>>h(2,vector<ll>(n,0));
    vector<vector<ll>>dp(n,vector<ll>(3,-1));
    for(int i=0;i<n;i++) cin>>h[0][i];
    for(int i=0;i<n;i++) cin>>h[1][i];

    cout<<solve(h,dp,0,2)<<endl;
    return 0;
}