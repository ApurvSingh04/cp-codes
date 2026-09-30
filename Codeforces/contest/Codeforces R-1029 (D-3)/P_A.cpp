#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        int firstClosed=-1,lastClosed=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                if(firstClosed==-1) firstClosed=i;
                lastClosed=i;
            }
        }
        if((lastClosed-firstClosed+1)<=x){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}