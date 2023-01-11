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
struct Node* insertAtFirst(struct Node * head, int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main(){
    int n;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

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
    printf("Enter the data that you want to add at first position \n");
    scanf("%d",&n);
    head=insertAtFirst(head,n);
    printf("linked list after adding element in front\n");
    linkedlist(head);
    return 0;
}