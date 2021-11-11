#include <bits/stdc++.h>
using namespace std;


bool rec(int i, string s){
    if(i == s.size()/2){
        return true;
    }
    if(s[i] != s[s.size() - i - 1]){
        return false;
    }
    i++;
    return rec(i, s);
}

int main(){
    string s;
    cin >> s;
    bool ans = rec(0, s);
    if(ans){
        cout << "Yes";
    }
    else cout << "No";
}
