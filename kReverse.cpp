#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }
}

void insertAtTail(Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        tail = temp;
    }
}

void insertAtMiddle(Node* &head, Node* &tail, int data, int position){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void del(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int len(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

int middle(Node* head){
    int length = len(head);
    int mid = 0;
    if(length % 2 == 0){
        mid = ((length / 2) + 1);
    }
    else{
        mid = ((length / 2) + 1);
    }
    return mid;
}

Node* kRev(Node* head, int k){
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* nextNode = NULL;
    int cnt = 0;
    while(curr != NULL && cnt < k){
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
        cnt++;
    }

    if(nextNode != NULL){
        head -> next = kRev(nextNode, k);
    }

    return prev;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* a = new Node(10);
    Node* tail = a;
    insertAtHead(a, 99);
    insertAtTail(tail, 8);
    insertAtMiddle(a, tail, 55, 2);
    print(a);
    insertAtTail(tail, 20);
    insertAtTail(tail, 90);
    insertAtTail(tail, 98);
    insertAtTail(tail, 96);
    print(a);
    kRev(a, 2);
    print(a);
}