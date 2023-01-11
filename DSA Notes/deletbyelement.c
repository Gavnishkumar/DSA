#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void dispalaylinklist(struct Node* head){
    struct Node* ptr;
    ptr=head;
    while(ptr!=NULL){
         printf("Element: %d \n",(ptr->data));
         ptr=ptr->next;
    }
}   
struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    if(value==(head->data)){
        head=head->next;
    }
    else{
        
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    }
    return head;
}
int main(){
struct Node* head;
struct Node* first;
struct Node* second;
struct Node* third;

head=(struct Node*)malloc(sizeof(struct Node));
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));

head->data=23;
head->next=first;
first->data=45;
first->next=second;
second->data=56;
second->next=third;
third->data=67;
third->next=NULL;
dispalaylinklist(head);

 int element;
    printf("Enter the element of linklist that you want to delet \n");
    scanf("%d",&element);
    head=deleteByValue(head,element);
printf("link list after deleting specific element \n");
dispalaylinklist(head);
    return 0;
}   