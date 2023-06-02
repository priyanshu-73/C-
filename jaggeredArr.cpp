#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int** jaggeredArr = new int*[n];
    int* m = new int[n];

    for(int i = 0; i < n; i++){
        cin >> m[i];
        jaggeredArr[i] = new int[m[i]];
        for(int j = 0; j < m[i]; j++){
            cin >> jaggeredArr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m[i]; j++){
            cout << jaggeredArr[i][j] << " ";
        }
        cout << endl;
    }
}