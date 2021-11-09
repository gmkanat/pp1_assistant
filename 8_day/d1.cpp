#include <bits/stdc++.h>
using namespace std;

// stoi string to int

int sumDigits(string s, int i){
    if(i == s.size()){
        return 0;
    }
    int k = s[i] - '0'; 
    i++;
    return k + sumDigits(s, i);
}

int main(){
    string s;
    cin >> s;
    cout << sumDigits(s, 0);
}
