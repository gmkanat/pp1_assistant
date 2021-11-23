#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int>mp;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(mp.count(s) == 0){ // mp.count()  0 - no such key  1 exist
            mp[s] = i;
        }
    }
    for(auto &x: mp){
        cout << x.first << " " << x.second << endl;
    }
}
