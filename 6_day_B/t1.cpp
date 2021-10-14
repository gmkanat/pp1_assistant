#include <bits/stdc++.h>
using namespace std;

string changeIndex(string q, int t){
    q[t-1] = 'A';
    return q;
}

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << changeIndex(s, k);
}


/* 

typeofdata nameOfFunction(arguments with types){
    return x(typeofdata);
}


*/