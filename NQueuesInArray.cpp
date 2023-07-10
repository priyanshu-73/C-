#include<bits/stdc++.h>
using namespace std;

class kQueue{
    public:

        int n;
        int k;
        int *arr;
        int *front;
        int *rear;
        int freeSpot;
        int *next;

    public:
        kQueue(int n, int k){
            this -> n = n;
            this -> k = k;
            front = new int(k);
            rear = new int(k);
            for(int i = 0 ; i < k; i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int(n);
            for(int i = 0; i < n; i++){
                next[i] = i + 1;
            }
            next[n - 1] = -1;
            arr = new int(n);
            freeSpot = 0;
        }

        void enqueue(int data, int q){
            if(freeSpot == -1){
                return;
            }

            int index = freeSpot;
            freeSpot = next[index];
            if(front[q] == -1){
                front[q] = index;
            }
            else{
                next[rear[q]] = index;
            }

            next[index] = -1;

            rear[q - 1] = index;

            arr[index] = data;
        }

        void dequeue(int q){
            if(front[q - 1] == -1){
                return;
            }

            int index = front[q - 1];

            front[q - 1] = next[index];

            next[index] = freeSpot;

            freeSpot = index;
        }
};


int main(){
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(11, 2);
    q.enqueue(12, 1);
}