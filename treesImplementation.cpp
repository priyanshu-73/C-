#include<bits/stdc++.h>
using namespace std;

class node{
    
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){

    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }

    cout << "Enter data to the left of " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter data to the right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
    
}

void inorderTraversal(node* root){
    if(root == NULL){
        return;
    }

    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}

void preorderTraversal(node* root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

void postorderTraversal(node* root){
    if(root == NULL){
        return;
    }

    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout << root -> data << " ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cout << "enter data for root node: " << endl;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter left node of " << temp -> data << endl;
        int leftData;
        cin >> leftData;
        if(leftData == -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "enter right node of " << temp -> data << endl;
        int rightData;
        cin >> rightData;
        if(rightData == -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    buildFromLevelOrder(root);
}