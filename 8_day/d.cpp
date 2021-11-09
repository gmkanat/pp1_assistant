#include <bits/stdc++.h>
using namespace std;
int ans; // if it is global, the variable equal to zero
string s;

void sumDigits(int i){
    if(i == s.size()){
        return;
    }
    ans += s[i] - '0';
    i++;
    sumDigits(i);
}


int main(){
    cin >> s;
    sumDigits(0);
    cout << ans << "\n";
}
