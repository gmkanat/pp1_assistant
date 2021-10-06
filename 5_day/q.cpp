#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = 11;
    int a[n];
    for(int i = 0; i < n; i++) a[i] = 0;

    for(int i = 0; i < str.size(); i++){
        a[int(str[i]) - int('0')] += 1;
    }
    
    

    int max1 = -100;
    for(int i = 0; i < n; i++){
        if (max1 < a[i]) max1 = a[i];
    }

   
    int ok = 0;
    for (int i = 0; i < n; i++){
        if(a[i] > 0){
            if(max1 != a[i]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}