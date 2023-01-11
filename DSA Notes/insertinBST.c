#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*creatnode(int data){
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}
void insertinBST(struct node*p,int val){
    struct node*prev=NULL;
   while(p!=NULL){
    prev=p;
    if(val==p->data){
        printf("This value is already in BST \n");
        return;
    }
    else if(val<p->data){
        p=p->left;
    }
    else{
        p=p->right;
    }
   }
   struct node*new=creatnode(val);
   if(val<prev->data){
        prev->left= new;
   }
   else{
    prev->right= new;
   }   
}
void inOrder(struct node*root){
    if(root!=NULL){
        inOrder(root->left);
        printf(" %d ",root->data);
        inOrder(root->right);
    }
}
int main(){
    struct node*root=creatnode(7);
    struct node*left1=creatnode(5);
    struct node*right1=creatnode(10);
    struct node*leftl1=creatnode(4);
    struct node*rightl1=creatnode(6);
    struct node*leftr1=creatnode(9);
    struct node*rightr1=creatnode(11);
    // linking nodes
    root->left=left1;
    root->right=right1;
    left1->left=leftl1;
    left1->right=rightl1;
    right1->left=leftr1;
    right1->right=rightr1;
insertinBST(root,8);
  printf("This is in order is shorted in ascending order then its a bst \n");
  inOrder(root);
        return 0;
}