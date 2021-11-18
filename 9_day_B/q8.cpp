#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(auto &x: mp){
        cout << x.first << " " << x.second << "\n";
    }
    // for(auto &[key, value]: mp){
    //     cout << key << " " << value << "\n";
    // }
}  

// vector<pair<pair<int,int>, int>> v;
/// x, y, z
/// comparator - pair
// auto - set, map
// 