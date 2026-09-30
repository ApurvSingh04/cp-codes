#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> a(n,vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    sort(a.begin(), a.end());
    priority_queue<int> pq;
    int i=0;

    while(true){
        while(i<n && a[i][0]<=k){
            if(k<=a[i][1]){
                pq.push(a[i][2]);
            }
            i++;
        }
        while(!pq.empty() && k>=pq.top()) pq.pop();
        if (pq.empty()) break; 
        k=pq.top();
        pq.pop();
    }
    cout<<k<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}