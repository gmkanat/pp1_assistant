#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        array.push_back(x);
    }
    int q;
    cin >> q;
    for(int i = 0; i < n; i++){
        if(q == array[i]){
            cout << "We found this number\n";
            break;
        }
    }
    cout << array.size();
}


/* 
    push_back добавляет элемент в конец
    pop_back удаляет последний элемент

*/
