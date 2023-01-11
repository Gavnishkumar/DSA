#include<stdio.h>
#include<stdlib.h>
struct Node{
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};
// finding height function
int getHeight(struct Node *n ){
    if(n==NULL){
        return 0;
    }
    return n->height;
}

// finding maximum of two numbers
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
// finding balanced factor
int getBalancedFactor(struct Node*n){
    if(n==NULL) 
        return 0;
    return (getHeight(n->left)-getHeight(n->right));
}

// create Node
struct Node* createNode(int val){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->key=val;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;
}
// left Rotation
struct Node* leftRotate(struct Node*x){
    struct Node*y=x->left;
    struct Node*T2=y->left;
    y->left=x;
    x->right=T2;
    x->height=max(getHeight(x->left),getHeight(x->right))+1;
    y->height=max(getHeight(y->left),getHeight(y->right))+1;
    return y;
}
// right Rotation
struct Node* rightRotate(struct Node*y){
    struct Node*x=y->left;
    struct Node*T2=x->right;
    y->left=T2;
    x->right=y;
    x->height=max(getHeight(x->left),getHeight(x->right))+1;
    y->height=max(getHeight(y->left),getHeight(y->right))+1;
    return x;
}

// inserting Node according to AVl rule
struct Node *insert(struct Node* node, int key){
    if (node == NULL)
        return  createNode(key);
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalancedFactor(node);
    // Left Left Case
        if(bf>1 && key < node->left->key){
            return rightRotate(node);
        }
    // Right Right Case
        if(bf<-1 && key > node->right->key){
            return leftRotate(node);
        }
    // Left Right Case
    if(bf>1 && key > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf<-1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}
void preOrder(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
struct Node*root=NULL;
    root=insert(root,12);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,34);
    root=insert(root,23);
    root=insert(root,9);
    root=insert(root,11);
    root=insert(root,15);
    preOrder(root);
    return 0;
}