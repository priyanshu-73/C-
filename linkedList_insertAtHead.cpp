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
};

void insertAtHead(Node* &head, int data){
	Node* temp = new Node(data);
	temp -> next = head;
	head = temp;
}

void print(Node* &head){
	Node* temp = head;
	while (temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;	
}

int main(){
	Node* a = new Node(2);
	print(a);
	insertAtHead(a, 1);
	print(a);
}