#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        string ans="";
        getline(cin, s);
        ans+=s[0];
        bool flag=false;
        for(char c : s){
            if(c==' '){
                flag=true;
            }
            else if(flag){
                ans+=c;
                flag=false;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}