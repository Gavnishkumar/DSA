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
struct Node* insertAtLast(struct Node * head, int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
     struct Node*p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return ptr;
}


int main(){
    int n;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

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
    printf("Enter the data that you want to add at last position \n");
    scanf("%d",&n);
    fifth=insertAtLast(head,n);
    printf("linked list after adding element at last position \n");
    linkedlist(head);
    return 0;
}