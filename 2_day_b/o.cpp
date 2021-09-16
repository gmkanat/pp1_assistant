#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1]; 
    for(int i = a; i <= b; i++)
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }   
    sort(a + 1, a + n + 1);
    // reverse(a , a + n);
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}



/* 
    sort(a, a + n);
    sort(a + start, a + end);
*/
