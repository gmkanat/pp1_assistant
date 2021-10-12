#include <bits/stdc++.h>
using namespace std;

string withoutVowels(string s){
    string t = "AEIOUaeiou";
    string k;
    for(int i = 0; i < s.size(); i++){
        int ok = false;
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                ok = true;
            }
        }
        if(!ok){
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

