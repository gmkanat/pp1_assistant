#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    int cnt = 0;
    for(auto &kv: mp){
        if(kv.second == 3){
            cnt++;
        }
    }
    cout << cnt << endl;
}
