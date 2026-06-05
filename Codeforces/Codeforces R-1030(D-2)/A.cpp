#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s="";
        for(int i=0;i<n;i++){
            if(i<k) s+='1';
            else s+='0';
        }
        cout<<s<<endl;
    }
    return 0;
}