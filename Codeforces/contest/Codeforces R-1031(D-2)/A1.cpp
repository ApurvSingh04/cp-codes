#include<bits/stdc++.h>
using namespace std;

int main(){
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
            if(k>=b){
                int c1=(k-b)/y + 1;
                count+=c1;
                k=k-c1*y;
            }
            if(k>=a){
                int c2=(k-a)/x + 1;
                count+=c2;
                k=k-c2*x;
            }
        }
        else{
            if(k>=a){
                int c2=(k-a)/x + 1;
                count+=c2;
                k=k-c2*x;
            }
            if(k>=b){
                int c1=(k-b)/y + 1;
                count+=c1;
                k=k-c1*y;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}