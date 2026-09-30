#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<-1<<endl;
        bool is_perfecto=true;
        for(int i=1;i<=n;i++){
            if((n*n+n)%2){
                int a=(n*n+n)/2;
                if(sqrt(a)*sqrt(a)==a) is_perfecto=false;
            }
        }
        if(is_perfecto){
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}