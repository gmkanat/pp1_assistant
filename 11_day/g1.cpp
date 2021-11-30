#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a, b;
        int x, y;
        cin >> a >> x >> b >> y;
        string s = a + " " + to_string(x) + " " + b + " " + to_string(y);
        string t = a + " and " + b + " " + to_string(x + y);
        mp[s] = t;
    }
    for(auto x: mp){
        cout << x.second << endl;
    }
}
