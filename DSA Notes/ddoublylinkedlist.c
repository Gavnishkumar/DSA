#include <stdio.h>
#include <stdlib.h>

// node creation
struct Node {
  
  int data;
  struct Node* next;
  struct Node* prev;
};
  static int count=5;
void insertFront(struct Node** head, int data) {
  // allocate memory for newNode
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = (*head);
  newNode->prev = NULL;
  count++;
  if ((*head) != NULL)
    (*head)->prev = newNode;
  (*head) = newNode;
}
void insertEnd(struct Node** head, int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  struct Node* temp = *head;
  count++;
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }

  while (temp->next != NULL)
    temp = temp->next;


  temp->next = newNode;

  newNode->prev = temp;
}
void insertatmiddle(struct Node** head,int val){
    struct Node * newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*temp=*head;
    for(int i=0;i<count/2;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->data=val;
    newnode->prev=temp;
}

void displayList(struct Node* node) {
  struct Node* last;

  while (node != NULL) {
    printf("element : %d\n", node->data);
    last = node;
    node = node->next;
  }
  if (node == NULL)
    printf("NULL\n");
}

int main() {
  struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*first=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth=(struct Node*)malloc(sizeof(struct Node));
    struct Node*fifth=(struct Node*)malloc(sizeof(struct Node));
head->prev=NULL;
head->data=3;
head->next=first;

first->prev=head;
first->data=4;
first->next=second;

second->prev=first;
second->data=5;
second->next=third;

third->prev=second;
third->data=7;
third->next=fourth;

fourth->prev=third;
fourth->data=9;
fourth->next=fifth;

fifth->prev=fourth;
fifth->data=23;
fifth->next=NULL;
printf("element before adeding at first and last posititon \n");
displayList(head);

  insertFront(&head, 1);

  insertEnd(&head, 9);
printf("Element after adding some 1 at first and 9 at last position \n");
  displayList(head);
  printf("insert 34 in middle \n");
  insertatmiddle(&head,34);
  displayList(head);
}