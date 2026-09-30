#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2*n-3<<endl;
        for(int i=0;i<n;i++){
            if(i!=0)cout<<i+1<<" "<<1<<" "<<i+1<<"\n";
            if(!(i==n-1 || i==n-2))cout<<i+1<<" "<<i+2<<" "<<n<<"\n";
        }
    }
    return 0;
}