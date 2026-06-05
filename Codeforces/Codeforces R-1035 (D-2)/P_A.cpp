#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int count=0;
    if(a>b) {
        if((a^1)==b) cout<<y<<endl;
        else cout<<-1<<endl;
    }
    else if(a==b) cout<<0<<endl;
    else{
        if(x<=y) count=(b-a)*x;
        else{
            if(b==a+1) {
                if(a%2==0) count=y;
                else count=x;
            }
            else {
                int evens=(b-a)/2;
                if(a%2==0 && b%2==1) evens++;
                count=evens*y + (b - a - evens)*x;
            }
        }
        cout<<count<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
    