#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>a(n);
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum+= a[i];
        }
        int avg=sum/n;
        if(a[0]<avg || a[n-1]>avg) {
            cout<<"NO\n";
            continue;
        }
        int curr_sum=0;
        bool possible=true;
        for(int i=0;i<n;i++){
            if(a[i]>=avg)curr_sum +=(a[i]-avg);
            else curr_sum-=(avg-a[i]);
            if(curr_sum<0){
                cout<<"NO\n";
                possible = false;
                break;
            }
        }
        if(possible) cout<<"YES\n";
    }
    return 0;
}