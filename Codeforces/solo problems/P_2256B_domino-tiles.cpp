#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int mod = 998244353;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool hasErased = false;
    bool oddplacefilled = false, evenplacefilled = false;
    int oddi = -1, eveni = -1;

    for(int i=0; i<n; i++){
        if(s[i] != '?'){
            if(i%2 == 0 && eveni==-1) eveni = i;
            else if(i%2 == 1 && oddi==-1) oddi = i;
        }
    }
    if (oddi != -1) {
        char val = s[oddi];
    
        while (oddi + 2 < n) {
            if (s[oddi + 2] != '?' && val == s[oddi + 2]) {
                cout << 0 << endl;
                return;
            }
        
            val = (val == '0' ? '1' : '0');
            oddi += 2;
        }
    }
    
    if (eveni != -1) {
        char val = s[eveni];
    
        while (eveni + 2 < n) {
            if (s[eveni + 2] != '?' && val == s[eveni + 2]) {
                cout << 0 << endl;
                return;
            }
        
            val = (val == '0' ? '1' : '0');
            eveni += 2;
        }
    }


    for(int i=0; i<n; i++){
        if(s[i] == '?') {
            hasErased = true;
        }
        else{
            if(i%2 == 0) evenplacefilled = true;
            else oddplacefilled = true;
        }
    }

    if(!hasErased){
        cout<<1<<endl;
        return;
    }
    int odd = 2, even = 2; 
    if(oddplacefilled) odd = 1;
    if(evenplacefilled || n==1) even = 1;
    cout<<odd*even<<endl;
    return;
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