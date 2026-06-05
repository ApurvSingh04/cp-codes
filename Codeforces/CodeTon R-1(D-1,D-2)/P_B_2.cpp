#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool found = false;
        int i=0,j=1;
        while(i<n && j<n){
            if(a[j]==a[i]+k){
                found=true;
                break;
            }
            else if(a[j]-a[i]>k){
                i++;
            }
            else{
                j++;
            }
        }
        cout<<(found?"YES":"NO")<<'\n';
    }

    return 0;
}