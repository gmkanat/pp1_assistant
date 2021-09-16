#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int s = 0;
    while(cin >> x){
        s += x;
        if(x == 0){
            break;
        }
    }    
    cout << s << endl;
}

