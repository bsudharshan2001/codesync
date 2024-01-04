#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

// Inorder Traversal - (left - root - right)

void inorderTraversal(struct Node* node){
    if(node==NULL)
        return;
    
    inorderTraversal(node->left);
    cout<<node->data<<" -> ";
    inorderTraversal(node->right);
}

// Preorder Traversal - (root - left - right)

void preorderTraversal(struct Node* node){
    if(node==NULL)
        return;
    
    cout<<node->data<<" -> ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);    
    
}

// Postorder Traversal - (left - right - root)

void postorderTraversal(struct Node* node){
    if(node==NULL)
        return;
    
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<" -> ";    

}

int countNumNodes(struct Node *root){
    if(root==NULL)
        return 0;
    else 1 + countNumNodes(root->left) + countNumNodes(root->right);
}


bool checkComplete(struct Node *root, int index, int numberNodes){

    //Check if tree is empty
    if(root==NULL)
        return true;
    
    if(index>=numberNodes)
        return false;

    return (checkComplete(root->left,2*index+1,numberNodes) && checkComplete(root->right, 2*index+2, numberNodes));
}

bool checkHeightBalance(struct Node *root, int *height){

    //check for emptiness
    int leftHeight=0, rightHeight=0;

    int l=0,r=0;

    if(root==NULL){
        *height=0;
        return true;
    }

    l=checkHeightBalance(root->left, &leftHeight);
    r=checkHeightBalance(root->right, &rightHeight);

    if(leftHeight>rightHeight)
        *height=leftHeight+1;
    else  *height=rightHeight+1;

    if(std::abs(leftHeight-rightHeight>=2))
        return 0;
    else return l && r;

}




int main(){
    struct Node* root = new Node(1);
    root->left=new Node(12);
    root->right=new Node(9);
    root->left->left=new Node(5);
    root->left->right=new Node(6);

    cout << "Inorder traversal ";
    inorderTraversal(root);

    cout << "\nPreorder traversal ";
    preorderTraversal(root);

    cout << "\nPostorder traversal ";
    postorderTraversal(root);

    // int node_count=countNumNodes(root);
    // int index=0;

    // if(checkComplete(root,index,node_count))
    //     cout<<"Complete";
    // else cout<<"Not Complete";

    // int height=0;

    // if (checkHeightBalance(root, &height))
    //     cout << "The tree is balanced";
    // else cout << "The tree is not balanced";


    return 0;
}