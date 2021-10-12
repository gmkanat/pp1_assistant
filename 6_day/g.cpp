#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string t = "AEIOUaeiou";
    for(int i = 0; i < s.size(); i++){
        int ok = false;
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                ok = true;
            }
        }
        if(!ok){
            cout << s[i];
        }
    }       
}
