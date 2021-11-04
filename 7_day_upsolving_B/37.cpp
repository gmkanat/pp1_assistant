#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();    
    for(int i = 0; i < n + 2; i++){
        cout << "+";
    }
    cout << "\n+";
    cout << s;
    cout << "+\n";
    for(int i = 0; i < n + 2; i++){
        cout << "+";
    }
}
