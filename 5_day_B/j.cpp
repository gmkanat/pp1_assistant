#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        string t;
        for(int j = 0; j < s.size(); j++){
            if(i != j){
                t += s[j];
            }
        }
        // cout << t << endl;
        string k = t;
        reverse(k.begin(), k.end());
        if(k == t){
            cout << "YES\n";
            return 0;
        }
    }    
    cout << "NO\n";
}


// if('a' <= x && x <='z')
// s[i] -= 32;