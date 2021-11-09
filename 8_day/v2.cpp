#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n); // int a[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    // v.insert(v.begin() + 3, 10);
    // v.erase(v.begin());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    // v.clear();
    cout << "\n" << v.size() << "\n";
    cout << v[0] << " " << v.front() << "\n"; // analogs
    cout << v[v.size() - 1] << " " << v.back() << "\n";
    cout << v.at(0);
}


/* 
    push_back добавляет элемент в конец
    pop_back удаляет последний элемент
    sort(v.begin(), v.end()); v - name of array

    v.insert(v.begin() + i, x) - i - index, x - number 
*/
