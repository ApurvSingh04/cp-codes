#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    int pos=s;
    vector<int>a(n,0);
    int count=0;
    int sum=0;
    int ind=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0) sum+=a[i]-a[i-1];
        if(pos>a[i]) ind++;
    }
    if(pos<=a[0]){
        int i=0;
        while(pos<a[n-1]){
            count+=(a[i]-pos);
            pos=a[i];
            i++;
        }
        cout<<count<<endl;
        return;
    }
    else if(pos>=a[n-1]){
        int i=n-1;
        while(pos>a[0]){
            count+=(pos-a[i]);
            pos=a[i];
            i--;
        }
        cout<<count<<endl;
        return;
    }
    else{
        int left =abs(pos-a[0])+(a[n-1]-a[0]);
        int right =abs(pos-a[n-1])+(a[n-1]-a[0]);
        count = min(left, right);
        cout << count << endl;
        return;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}