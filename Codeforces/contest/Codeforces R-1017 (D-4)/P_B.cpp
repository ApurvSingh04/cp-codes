#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        
        int round=n-m;
        while(round--){
            if(abs(l)==abs(r)){
                l++;
            }
            else if(abs(l)<abs(r)){
                r--;
            }
            else if(abs(l)>abs(r)){
                l++;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}