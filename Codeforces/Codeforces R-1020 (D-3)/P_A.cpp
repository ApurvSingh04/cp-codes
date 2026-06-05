#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        int ones=0;
        int zeros=0;
        for(char c : s){
            if(c=='1') ones++;
            else zeros++;
        }
        int ans=(ones*n)+zeros-ones;
        cout << ans << endl;
    }
    return 0;
}