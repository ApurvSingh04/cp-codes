#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k; 
    cin>>n;
    cin>>k;
    vector<int> arr(n,0);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mp[arr[i]] = i;
    }
    sort(arr.begin(), arr.end());
    int count=0;
    int i=0;
    for(i=0;i<n;i++){
        if(count+arr[i]<=k){
            count+=arr[i];
        }
        else{
            break;
        }
    }
    cout<<i<<endl;
    for(int j=0;j<i;j++) cout<<mp[arr[j]]<<" ";
    cout<<endl;
    return 0;
}
    