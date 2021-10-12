#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    bool ok = false;
    string t = "AEIOUaeiou";
    for(int j = 0; j < t.size(); j++){
        if(c == t[j]){
            ok = true;
        }
    }
    return ok;
}
string withoutVowels(string s){
    string k;
    for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i]) == false){
            k += s[i];
        }
    }
    return k;
}

int main(){
    string s;
    getline(cin, s);
    cout << withoutVowels(s);   
}
