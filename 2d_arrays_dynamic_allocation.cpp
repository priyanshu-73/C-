#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int m;
    cin >> m;
    // arr with n rows
    int ** arr = new int*[n];

    for(int i = 0; i < m; i++){
        arr[i] = new int[m];
    } 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for(int i = 0; i < m; i++){
        delete [] arr[i];
    } 
    delete []arr;
}