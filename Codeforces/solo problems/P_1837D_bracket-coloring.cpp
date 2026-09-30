#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        cout<<-1<<"\n";
        return;
    }

    int balance = 0;
    //first checking for string s to be beautiful
    bool is_beautiful = true;
    for(int i=0; i<n; i++){
        if(s[i]=='(') balance++;
        else balance--;
        if(balance<0) {
            is_beautiful = false;
        }
    }
    if(balance!=0){
        cout<<-1<<"\n";
        return;
    }
    if(is_beautiful){
        cout<<1<<"\n";
        for(int i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<"\n";
        return;
    }

    bool is_reverse_beautiful = true;
    balance = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='(') balance++;
        else balance--;
        if(balance>0) {
            is_reverse_beautiful = false;
        }
    }

    if(is_reverse_beautiful){
        
        cout<<1<<"\n";
        for(int i=0; i<n; i++){
            cout<<1<<" ";
        }
        cout<<"\n";
        return;
    }

    //else have both beautiful and reverse beautiful parts
    cout<<2<<"\n";
    balance = 0;
    int color;
    for(int i=0; i<n; i++){
        if(balance == 0) color = (s[i]=='(' ? 1 : 2);
        cout<< color <<" ";
        if(s[i]=='(') balance++;
        else balance--;
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}