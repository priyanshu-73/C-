#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int p = arr[s];
    int count = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] < p){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= p){
            i++;
        }
        while(arr[j] > p){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j++]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    int arr[] = {2, 1, 3, 2, 4, 3};
    quickSort(arr, 0, 6- 1);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}