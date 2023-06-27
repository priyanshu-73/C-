#include<iostream>
#include<map>
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

void insertNode(Node* &tail, int ele, int d){
    // assume the element is present in the list

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    // non empty list
    else{
        Node* curr = tail;
        while(curr -> data != ele){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void del(Node* &tail, int ele){
    if(tail == NULL){
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != ele){
            prev = curr;
            curr = curr -> next;
        }
        if(curr == prev){
            tail = NULL;
        }
        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCir(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == NULL){
        return false;
    }
    if(temp == head){
        return true;
    }
}

bool floydDetect(Node* head){
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

int main(){
    Node* a = NULL;
    insertNode(a, 10, 11);
    print(a);
    insertNode(a, 11, 12);
    print(a);
    cout << isCir(a) << endl;
    cout <<floydDetect(a)<<endl;
}