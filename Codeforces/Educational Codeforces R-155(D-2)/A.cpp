#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>s(n);
        vector<long long>e(n);
        for(int i=0; i<n; i++){
            cin>>s[i]>>e[i];
        }
        int ans=s[0];
        for(int i=1;i<n;i++){
            if(s[i]>=s[0]){
                if(e[i]>=e[0]) {
                    ans=-1;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}