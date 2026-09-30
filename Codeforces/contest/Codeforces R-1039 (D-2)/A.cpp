#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long c;
    cin>>n>>c;
    vector<long long>v(n);
    priority_queue<long long>pq;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        pq.push(v[i]);
    }
    int coins=0;
    while(!pq.empty()){
        while(!pq.empty() && pq.top()>c){
            pq.pop();
            coins++;
        }
        if(!pq.empty())pq.pop();
        vector<long long> temp;
        while (!pq.empty()){
            long long val = pq.top();
            pq.pop();
            temp.push_back(val * 2);
        }
        for (auto val : temp) {
            pq.push(val);
        }
    }
    cout<<coins<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}