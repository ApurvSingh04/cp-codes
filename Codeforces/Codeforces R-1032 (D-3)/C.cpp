#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    int max_val = 0;
    for(int i=0; i<n;i++) {
        for(int j=0; j<m;j++) {
            cin>>a[i][j];
            max_val = max(max_val, a[i][j]);
        }
    }
    vector<int>row(m,0);
    vector<int>cols(n,0);
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if (a[i][j] == max_val){
                cols[i]++;
                row[j]++;
            }
        }
    }
    int row_count=0;
    int col_count=0;
    bool decreasable=true;
    for(int i=0;i<n;i++){
        if(cols[i]>=2) col_count++;
        if(col_count>=2){
            decreasable=false;
            break;
        } 
    }
    if(decreasable==true){
        for(int j=0;j<m;j++){
            if(row[j]>=2) row_count++;
            if(row_count>=2){
                decreasable=false;
                break;
            } 
        }
    }
    row_count=0;
    col_count=0;
    for(int i=0;i<n;i++){
        if(cols[i]>=1) col_count++;
    }
    for(int j=0;j<m;j++){
        if(row[j]>=1) row_count++;
    }
        bool found = false;
    for (int i = 0; i < n && !found; ++i) {
        for (int j = 0; j < m && !found; ++j) {
            if (a[i][j] == max_val) {
                bool valid = true;
                for (int x = 0; x < n; ++x) {
                    for (int y = 0; y < m; ++y) {
                        if (a[x][y] == max_val && x != i && y != j) {
                            valid = false;
                            break;
                        }
                    }
                    if (!valid) break;
                }
                if (valid) found = true;
            }
        }
    }
    if (!found) decreasable = false;


    if(decreasable) cout<<max_val-1<<endl;
    else cout<<max_val<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}