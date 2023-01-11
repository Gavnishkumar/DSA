#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linkedlist(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element: %d \n ",(ptr->data));
    ptr=ptr->next;
}
}
struct Node* insertAtUserspecific(struct Node * head, int data,int index){
    int i;
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *prevNode=head;
    struct Node *nextNode;
    ptr->data=data;
    for(i=0;i<index-1;i++){
        prevNode=prevNode->next;
    }
    nextNode=prevNode->next;
    prevNode->next=ptr;
    ptr->next=nextNode;
    return ptr;
}


int main(){
    int n,index;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *Anyindex;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=8;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=7;
    third->next=fourth;

    fourth->data=3;
    fourth->next=NULL;
    linkedlist(head);
    printf("Enter the index at which you want to add data \n");
    scanf("%d",&index);
    printf("Enter the data that you want to add at last position \n");
    scanf("%d",&n);
    Anyindex=insertAtUserspecific(head,n,index);
    printf("linked list after adding element at last position \n");
    linkedlist(head);
    return 0;
}