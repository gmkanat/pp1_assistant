#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = n - 1 ;
    // int cnt1 =
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == cnt){
                cout << n - cnt;
                cnt--;
            }
            else cout << ".";
        }
        cout << "\n";
    }    
}
