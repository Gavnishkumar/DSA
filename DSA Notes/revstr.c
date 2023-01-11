#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    char *a;
    int top;
};
int isEmpty(struct stack*p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack*p){
    if(p->top==p->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *p,char b[]){
    for(int i=0;i<strlen(b);i++){
        p->top++;
        p->a[p->top]=b[i];
    }
}
void pop(struct stack*p,char b[]){
    for(int i=0;i<strlen(b);i++){
    if(isEmpty(p)){
        printf("your stack is empty\n");
    }
    else{
        printf("%c",p->a[p->top]);
        p->top--;
    }
    }
}
int main(){
    struct stack*ptr=(struct stack*)malloc(sizeof(struct stack));
    ptr->size=100;
    ptr->top=-1;
    ptr->a=(char*)malloc(ptr->size*sizeof(char));
    printf("Enter any string\n");
    char str[100];
    gets(str);
    push(ptr,str);
    pop(ptr,str);
    return 0;
}