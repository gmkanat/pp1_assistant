#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 1){
        int l = n - 1, r = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < l; j++){
                cout << ".";
            }
            for(int j = 0; j < r; j++){
                cout << "#";
            }
            l--;
            r++;
            cout << "\n";
        }
    }    
    else{
        int l = 1, r = n - 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < l; j++){
                cout << "#";
            }
            for(int j = 0; j < r; j++){
                cout << ".";
            }
            l++;
            r--;
            cout << "\n";
        }
    }
}
