#include<stdio.h>
#include<stdlib.h>


struct Node{
  
    int data;
    struct Node*next;
};

struct Node* top=NULL;

int isEmpty(struct Node*top){
    if(top==NULL){
      
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node*top){
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        
        return 1;
    }
    else{
        return 0;
    }
}
struct Node* push(struct Node*top,int val){
    if(isFull(top)){
        printf("your stack is full\n");
    }  
    else{
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
        n->data=val;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}
int stacktop(struct Node*ptr){
      
    return top->data;
}
void stackbottom(struct Node*top){
    struct Node*ptr=top;
    while(ptr != NULL){
        ptr=ptr->next;
    }
printf("%d",ptr->data);
}
void traversal(struct Node*ptr){
    if(isEmpty(ptr)){
        printf("your stack is empty\n");
    }
    else{
        while(ptr!=NULL){
            printf("Element: %d \n",ptr->data);
            ptr=ptr->next;
        }
    }
}
int peek(struct Node *top,int index){
    struct Node*ptr=top;
    for(int i=1;i<index;i++){
        ptr=ptr->next;
    }
    return ptr->data;

}
int main(){ 
    top=push(top,23);
 
    top=push(top,24);
    top=push(top,25);
    top=push(top,26);
    top=push(top,27);
    traversal(top);
    printf("now i am going to pop a element\n");
    int x=pop(&top);
    printf("%d is deleted \n",x);
    traversal(top);
    printf("your top element \n");
    int toe=stacktop(top);
    printf("your top element is: %d\n",toe);
    
    printf("vlaue at index 3 is %d \n",peek(top,3));
    printf("vlaue at index 2 is %d \n",peek(top,2));
    printf("%d",top->data);
 stackbottom(top);
    printf("%d",top->data);
    return 0;
}