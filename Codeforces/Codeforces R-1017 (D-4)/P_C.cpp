#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n*n,0);
        for(int i=0;i<n*n;i++){
            cin>>arr[i];
        }
        vector<int> v(2*n,0);
        v[0]= (2*n*n)+n;
        /*
        for(int i=1;i<n*n;i++){
            if(i<=n){
                v[i]=arr[i-1];
            }
            else if(i>=(n*n)-n){
                v[(2*n)-(n*n)+i]=arr[i];
            }
        }
        */
        for(int i=1;i<=n;i++) {
            v[i]=arr[i-1];
        }
        for(int i=(n*n)-n;i<n*n;i++) {
            v[(2*n)-(n*n)+i]=arr[i];
        }
        for(int i=1;i<2*n;i++){
            v[0]-=v[i];
        }
        for(int i : v) cout<<i<<" ";
        cout<<endl;
    }
}