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
void deletatanyindex(struct Node*head){
    int index,i;
    printf("Enter the index that element you want to delet \n");
    scanf("%d", &index);
    struct Node*p=head;
    struct Node*q;
    for(i=0;i<index-1;i++){
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
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
deletatanyindex(head);
printf("element of link list after deleting specific element at any index \n");
dispalaylinklist(head);
    return 0;
}   