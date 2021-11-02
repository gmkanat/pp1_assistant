#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a1 = 0, a2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < a2; j++){
            cout << "-";
        }
        if(a1 == i){
            cout << "*";
        }
        a2++;
        a1++;
        cout << endl;
    }
}
