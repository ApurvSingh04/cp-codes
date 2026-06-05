#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        if(k<a && k<b){
            cout<<0<<endl;
            continue;
        }
        int count=0;
        if(x>=y){
            while(k>=b){
                count++;
                k-=y;
            }
            while(k>=a){
                count++;
                k-=x;
            }
        }
        else{
            while(k>=a){
                count++;
                k-=x;
            }
            while(k>=b){
                count++;
                k-=y;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}