#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int>ans(n,0);
        ans[0]=1;
        int e=0;
        for(int i=1;i<n;i++){
            if(i<((n+1)/2)){
                ans[i]=ans[i-1]+2;
            }
            else{
                ans[n-1+((n+1)/2)-i]=e+2;
                e+=2;
            }
        }
        for(int i : ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}