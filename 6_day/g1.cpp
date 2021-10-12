#include <bits/stdc++.h>
using namespace std;
bool check(char c){
    bool ok = false;
    string t = "AEIOUaeiou";
    for(int j = 0; j < t.size(); j++){
        if(c == t[j]){
            ok = true;
        }
    }
    return ok;
}


int main(){
    string s;
    getline(cin, s);
    string t = "AEIOUaeiou";
    for(int i = 0; i < s.size(); i++){ 
        if(check(s[i]) == false){
            cout << s[i];
        }
    }       
}
