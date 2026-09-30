#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=1;
        int prev=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-prev>1){
                count++;
                prev=arr[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

