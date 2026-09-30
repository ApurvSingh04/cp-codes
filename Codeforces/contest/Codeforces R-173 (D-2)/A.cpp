#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;
    int X=0;
    while (t--) {
        string s;
        cin >> s;
        if(s=="++X" || s=="X++") {
            X++;
        } else if(s=="--X" || s=="X--") {
            X--;
        }
    }
    cout <<X<<endl;
}
    