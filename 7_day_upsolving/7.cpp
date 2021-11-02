#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n, b, k;
    cin >> a >> n >> b >> k;    
    int x =  ((a >> n) & 1);
    int y =  ((b >> k) & 1);
    cout << x << " " << y << "\n";
    if(x == y){
        cout << "Thunderclap and Flash!\n";
    }
    else {
        cout << "Thunder Breathing... First form...";
    }
}


// left shift
// 1001
// >> 1
// 1110
// 0001

