#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 1; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n-1){
                cout << cnt;
                cnt++;
            }
            else{
                cout << ".";
            }
        }
        cout << "\n";
    }
}
