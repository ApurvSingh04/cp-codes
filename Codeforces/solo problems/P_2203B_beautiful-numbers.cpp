#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    ll x;
    cin>>x;
    vector<int> digits;
    int sum = 0;
    while(x){
        int digit = x%10;
        sum+=digit;
        digits.push_back(digit);
        x/=10;
    }

    if (sum <= 9) {
        cout << 0 << "\n";
        return;
    }

    reverse(digits.begin(), digits.end());
    digits[0]-=1;
    sort(digits.begin(), digits.end(),greater<int>());   
    
    int R = sum-9;

    int moves = 0;
    for(int i=0; i<digits.size(); i++){
        R-=digits[i];
        moves++;
        if(R<=0){
            break;
        }
    }

    cout<<moves<<"\n";
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