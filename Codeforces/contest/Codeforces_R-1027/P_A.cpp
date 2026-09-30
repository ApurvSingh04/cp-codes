/*#include<bits/stdc++.h>
using namespace std;

vector<int> check(int num, unordered_map<int, int> &map) {
    for (auto it : map) {
        int firstSquare = it.first;
        int secondSquare = num - firstSquare;
        if(firstSquare==num)  return{0,firstSquare};
        else if (map.find(secondSquare) != map.end()) {
            return {map[firstSquare], map[secondSquare]};
        }
    }
    return {-1, -1};
}

int main(){
    int t;
    cin>>t;
    string s;
    unordered_map<int,int> map;
    for(int i=1;i<100;i++){
        map[i*i]=i;
    }
    while(t--){
        s="";
        cin>>s;
        int num=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        cout<<num<<" ";
        vector<int> v=check(num,map);
        if(v[0]==-1) cout<<-1<<endl;
        else cout<<v[0]<<" "<<v[1]<<endl;
    }
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
        int root = sqrt(num);
        if (root * root != num) {
            cout<<-1<< endl;
        }
        else{
            cout << 0 <<" "<<root<< endl;
        }
    }
    return 0;
}