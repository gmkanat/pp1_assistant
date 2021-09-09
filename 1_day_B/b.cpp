#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int sum;
    sum = n + m/100 + m%10;
    cout << sum << endl;
}


/*
    m/100 - first digit
    m%10 - last digit
*/