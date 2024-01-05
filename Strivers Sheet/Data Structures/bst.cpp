#include<bits/stdc++.h>
using namespace std;

//Time Complexities
//Search :
//Best Case - O(logn)
//Worst Case -O(n)
// Avg Case -O(logn)
//-------------
//Search :
//Best Case -O(logn)
//Worst Case -O(n)
// Avg Case -O(logn)
//-------------
//Search :
//Best Case -O(logn)
//Worst Case - O(n)
// Avg Case -O(logn)
struct Node{
    int data;
    struct Node *left, *right;
    // Node(int data){
    //     this->data=data;
    //     left=right=NULL;
    // }
};

struct Node *newNode(int item){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

void inorder(struct Node* node){
    if(node==NULL)
        return;
    
    inorder(node->left);
    cout<<node->data<<" -> ";
    inorder(node->right);
}

struct Node *insert(struct Node *node, int data){

    // Return a new node if the tree is empty
    if(node==NULL)
        return newNode(data);
    
    if(data<node->data)
        node->left=insert(node->left,data);
    else node->right=insert(node->right,data);


    return node;
}

// Find the inorder successor
struct Node *minValueNode(struct Node *node){
    struct Node *current=node;

    //Find the leftmost leaf
    while(current && current->left!=NULL)
        current=current->left;
    
    return current;
}

struct Node *deleteNode(struct Node *root, int data){

    //Return if the tree is empty
    if(root==NULL)
        return root;
    
    // Find the node to be deleted

    if(data<root->data)
        root->left=deleteNode(root->left,data);
    else if(data>root->data)
        root->right=deleteNode(root->right,data);
    else {
        //if the node is with only or no child
        if(root->left==NULL){
            struct Node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct Node *temp=root->left;
            free(root);
            return temp;
        }

        //if the node has two children
        struct Node *temp=minValueNode(root->right);

        //Place the inorder successor in the position
        root->data=temp->data;

        //delete the inorder successor
        root->right=deleteNode(root->right, temp->data);

    }
    return root;
}

int main(){
    struct Node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder traversal ";
    inorder(root);
    
    cout<< "After deleting 3\n";
    root=deleteNode(root,3);

    cout << "Inorder traversal ";
    inorder(root);


    return 0;
}