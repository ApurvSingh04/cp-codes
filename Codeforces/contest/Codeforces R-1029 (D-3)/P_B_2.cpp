/*
int n;
	scanf("%d", &n);
	
	puts("1");
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int>ans(n,0);
        for (int i = 2; i <= n; ++i){
		    cout<<i<<" ";
	    }
        cout<<1<<endl;
    }
    return 0;
}