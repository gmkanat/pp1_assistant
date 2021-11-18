#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    // to lowercase
    // add to map
    // print mp.size, keys of map
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]] = 1;
    }
    cout << mp.size() << "\n";
    for(auto &x: mp){
        cout << x.first << " ";
    }
}
