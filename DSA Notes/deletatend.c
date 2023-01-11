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
void deletatlast(struct Node*head){
    struct Node*ptr=head;
    struct Node*q=head->next;
    while((q->next)!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);

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

deletatlast(head);
printf("Element of link list after deleting last element of link list \n");
 
dispalaylinklist(head);
    return 0;
}   