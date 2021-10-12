#include <bits/stdc++.h>
using namespace std;
char toUpper(char c){
    if(c >= 'a' && c <= 'z'){
        c -= 32;
    }
    return c;
}


int main(){
    char s;
    cin >> s;
    cout << toUpper(s);    
}
