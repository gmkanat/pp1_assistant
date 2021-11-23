#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string name; 
        int seria;
        cin >> name >> seria;
        mp[name] += seria;
    }
    for(auto &x: mp){
        cout << x.first << " " << x.second << endl;
    }
}
