#include<stdio.h>
#include<stdlib.h>
int newtop;
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
void push(struct stack*ptr,int val){
    if(isFull(ptr)){
      printf("your stack is full \n");
    }
    else{
        ptr->top=ptr->top+1;
        ptr->arr[ptr->top]=val;
    }
    newtop=ptr->top;
}
void pull(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Your stack is already Empty \n");
    }
    else{
        ptr->top--;
        newtop--;
        
    }
}
int peek(struct stack*ptr,int i){
    if(isEmpty(ptr)){
        printf("your stack is Empty \n");
        return -1;
    }
    else{
        int j;
        for(j=1;j<i;j++){
            ptr->top--;
        }
        return ptr->arr[ptr->top];
    }
}
int atTop(struct stack * ptr){
    return ptr->arr[newtop];
}
int atBottom(struct stack* ptr){
    return ptr->arr[0];

}
void traverse(struct stack*ptr){
    while((ptr->top) >=0){
       printf("element : %d \n",(ptr->arr[ptr->top]));
       ptr->top--;
    }
}
int main(){
struct stack * s=(struct stack*)malloc(sizeof(struct stack));
s->size=7;
s->top=-1;
s->arr = (int *)malloc(s->size*(sizeof(int)));
push(s,3);
push(s,87);
push(s,45);
push(s,78);
push(s,43);
push(s,90);
push(s,67);
traverse(s);
pull(s);
pull(s);
int x=peek(s,2);
if(x==-1){
    printf("you should enter element in stack \n");
}
else{
    printf("your element found is : %d \n",x);
}
printf(" top and bottom are given below\n");
int topelement=atTop(s);
int bottomelement=atBottom(s);
printf("Top elemet is : %d \n",topelement);
printf("bottom elemet is : %d \n",bottomelement);
// traverse(s);
    return 0;
}