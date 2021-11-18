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

    set<char> setik;
    for(int i = 0; i < s.size(); i++){
        setik.insert(s[i]);
    }
    cout << setik.size() << "\n";
    for(auto &x: setik){
        cout << x << " ";
    }
}