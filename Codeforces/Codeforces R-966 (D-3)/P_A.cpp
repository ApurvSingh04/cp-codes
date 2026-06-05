#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n<3){
            cout<<"NO"<<endl;
            continue;
        }
        int k = stoi(s.substr(2));
        if(k<2 || s[0]!='1' || s[1]!='0' ||(k<=9 && n>3)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}