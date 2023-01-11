#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isEmpty(struct stack*ptr){
if(ptr->top ==-1){
// printf("stack is Empty \n");
return 1;
}
else{
    // printf("Stack is not completly Empty \n");
    return 0;
}
}
int isFull(struct stack*ptr){
if(ptr->size-1 == ptr->top){
    return 1;
}
else{
    return 0;
}
}
int main(){
struct stack * s=(struct stack*)malloc(sizeof(struct stack));
s->size=50;
s->top=-1;
s->arr = (int *)malloc(s->size*(sizeof(int)));
if(isEmpty(s)){
printf("stack is Empty \n");
}
else{
     printf("Stack is not Empty \n");
}
if(isFull(s)){
    printf("your stack is full \n");
}
else{
    printf("your stack has more space to add element \n");
}
    return 0;
}