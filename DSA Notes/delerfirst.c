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
struct Node*deletatfirst(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
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
head=deletatfirst(head);
printf("Element in linklist after deleting first position \n");
dispalaylinklist(head);

    return 0;
}   