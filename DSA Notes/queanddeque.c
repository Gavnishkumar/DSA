#include<stdio.h>
#include<stdlib.h>
struct queue{
    int f;
    int b;
    int size;
    int*arr;
};
int isFull(struct queue * p){
    if(p->b==p->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct queue * p){
    if(p->b==p->f){
        return 1;
    }
    else{
        return 0;
    }
}
void queue(struct queue *p,int val){
    if(isFull(p)){
        printf("your queue is full \n");
    }
    else{
        p->arr[p->b]=val;
        printf("your element at index %d is %d \n",p->b,p->arr[p->b]);
        p->b++;
    }
}
int dequeue(struct queue *p){
    int a=-1;
    if(isEmpty(p)){
        printf("Your queue is Empty \n");
    }
    else{ 
        a = p->arr[p->f]; 
        p->f++;
    }
    return a;
}
int main(){
    struct queue q;
    q.size=6;
    q.f=q.b=0;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    queue(&q,24);
    queue(&q,34);
    queue(&q,65);
   int x = dequeue(&q);
   printf("%d is dequed from this array \n",x);
    queue(&q,25);
    for(int i=q.f;i<q.b;i++){
        printf("Your element is %d \n",q.arr[i]);
    }
    return 0;
}