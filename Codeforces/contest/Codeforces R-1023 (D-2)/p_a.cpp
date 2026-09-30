#include<bits/stdc++.h>
using namespace std;
#include <numeric>
/*
This Concept Fails in the case when all numbers are even and odd . They can Still Have unequal gcd's 

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n,0);
        vector<int>ans(n,0);
        int evens=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]%2==0) {
                ans[i]=2;
                evens++;
            }
            else ans[i]=1;
        }
        if(evens==0 || evens==n) cout<<"No"<<endl;
        else {
            cout<<"Yes"<<endl;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
*/
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int g=arr[0];
        for(int i=1;i<n;i++){
            g=__gcd(g,arr[i]);
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=g){
                idx=i;
                break;
            }
        }
        if(idx==-1) cout<<"No"<<endl;
        else {
            cout<<"Yes"<<endl;
            for(int i=0;i<n;i++){
                if(i==idx) cout<<2<<" ";
                else cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

