#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 9, s = 56;
    if(n/10 == 0){
        cout << '0' << n;
    }
    else{
        cout << n;
    }
    if(s/10 == 0){
        cout << ":0" << s;
    }
    else cout << ":"<< s;
}