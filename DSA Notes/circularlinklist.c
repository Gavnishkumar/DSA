#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void traverse(struct Node* head){
    struct Node*ptr=head;
    do{
        printf("Element is : %d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node*insertAtFirst(struct Node*head){
    struct Node*ptr=head;
    struct Node*p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=10;
    do{
        ptr=ptr->next;
    }while(ptr->next!=head);
    ptr->next=p;
    p->next=head;
    head=p;
    return head;
}
struct Node*insertAtIndex(struct Node*head,int index,int element){
    struct Node*ptr=head;
    struct Node*p;
    struct Node*ptr2;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=element;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
    }
    ptr2=ptr->next;
    ptr->next=p;
    p->next=ptr2;
    return head;
}
struct Node*insertAtLast(struct Node*head){
    struct Node*ptr=head;
    struct Node*p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=15;
    while(ptr->next != head){
        ptr=ptr->next;
    }
    ptr->next=p;
    p->next=head;
    return head;
}
int main(){
   struct Node*head;
   struct Node*second;
   struct Node*third;
   struct Node*fourth;
   struct Node*fifth;
   head=(struct Node*)malloc(sizeof(struct Node));
   second=(struct Node*)malloc(sizeof(struct Node));
   third=(struct Node*)malloc(sizeof(struct Node));
   fourth=(struct Node*)malloc(sizeof(struct Node));
   fifth=(struct Node*)malloc(sizeof(struct Node));

   head->data=4;
   head->next=second;
   
   second->data=5;
   second->next=third;

   third->data=6;
   third->next=fourth;

   fourth->data=7;
   fourth->next=fifth;

   fifth->data=8;
   fifth->next=head;
   printf("Element of link list before adding at first posittion \n");
   traverse(head);
   printf("Element of link list after adding at first posittion \n");
   head=insertAtFirst(head);
   traverse(head);
   printf("Eelement of link list adding 20 at index 3 \n");
   head=insertAtIndex(head,3,20);
   traverse(head);
   printf("Element of links list adding at last \n");
   head=insertAtLast(head);
   traverse(head);
    return 0;
}