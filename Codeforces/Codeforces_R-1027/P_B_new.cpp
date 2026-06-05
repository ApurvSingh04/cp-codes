#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string s;
        cin>>n;
        cin>>k;
        cin>>s;
        int zeros=0;
        int ones=0;
        for(char c:s){
            if(c=='0') zeros++;
            else ones++;
        }
        int count= zeros/2 + ones/2;
        if(count<k) {
            cout<<"No"<<endl;
            continue;
        } 
        while(k--){
            if(zeros>ones){
                zeros-=2;
            }
            else ones-=2;
        }
        if(zeros==ones){
            cout<<"Yes"<<endl;
        } 
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}