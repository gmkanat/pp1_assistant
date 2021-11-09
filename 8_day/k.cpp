#include <bits/stdc++.h>
using namespace std;

string s;
int mx;
void rec(int i){
    if(i == s.size()){
        return;
    }
    mx = max(mx, s[i] - '0');
    rec(++i);
}

int main(){
    cin >> s;
    rec(0);
    cout << mx << "\n";
}
