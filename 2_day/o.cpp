// ^

#include <bits/stdc++.h>

/*
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
*/
using namespace std;
// increment i++ decrement i--
int main(){
    int n;
    cin >> n;
    int a[n];
    // int b[4];
    int i = 0;
    int k = n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int even = 0, odd = 0;
    while(i < n){
        cout << a[i] << " ";
        if (a[i] % 2 == 0){
            even++;
        }
        else{
            odd++; // nechetn
        }
        i++;
    }
    cout << even << " " << odd << "\n";
}



/*

for(start; end; step++){
    
}

*/
