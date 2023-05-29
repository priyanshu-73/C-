#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n, int m){
    if(i < 0 || i >= n || j < 0 || j >= m) 
        return false;
    return true;
}

void diagonalPrint(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int k = 0; k < n; k++){
        cout << matrix[k][0] << " ";
        int i = k - 1;
        int j = 1;
        while(isValid(i, j, n, m)){
            cout << matrix[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }

    for(int k = 1; k < m; k++){
        cout << matrix[n - 1][k] << " ";
        int i = n - 2;
        int j = k + 1;
        while(isValid( i, j, n, m )){
            cout << matrix[i][j] << " ";
            i--;
            j++;
        }
        cout << endl;
    }
}

int main(){
	vector<vector<int>> arr = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 },
		{ 17, 18, 19, 20 },
    };
    diagonalPrint(arr);
}