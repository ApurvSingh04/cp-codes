#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int partitions=1;
        unordered_set<int> set;
        set.insert(arr[0]);
        for(int i=1;i<n;i++){
            if(mp[arr[i]]<1 || (mp[arr[i]]==1 && (set.find(arr[i]))==set.end())) break;
            mp[arr[i]]--;
            if(set.find(arr[i])!=set.end()){
                partitions++;
                
            }
        }

    }
    return 0;
}