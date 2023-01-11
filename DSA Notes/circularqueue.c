#include<stdio.h>
#include<stdlib.h>
struct queue{
    int f;
    int b;
    int size;
    int*arr;
};
void enqueue(struct queue*p,int val){
    if((p->b+1)%p->size==p->f){
        printf("your queue is full \n");
    }
    else{
        p->arr[(p->b+1)%p->size]=val;
        p->b++;
    }

}

int dequeue(struct queue*p){
    int a=-1;
    if(p->b==p->f){
        printf("your queue is Empty \n");
    }
    else{
        a=p->arr[(p->f+1)%p->size];
        p->f=(p->f+1)%p->size;    
        return a;
    }
}
int main(){
    struct queue*p=(struct queue*)malloc(sizeof(struct queue));
    p->size=6;
    p->b=0;
    p->f=0;
    p->arr=(int*)malloc(sizeof(int)*p->size);
    enqueue(p,23); 
    enqueue(p,20); 
    enqueue(p,27); 
    enqueue(p,34); 
    enqueue(p,39 );
    printf("%d is dequeued \n",dequeue(p));
    enqueue(p,40 );
    printf("%d is dequeued \n",dequeue(p));
    enqueue(p,42);
    printf("%d is dequeued \n",dequeue(p));
    enqueue(p,48);
    enqueue(p,98);
 for(int i=0;i<=5;i++){
     printf("Your element is %d \n",p->arr[i]);
 }
    return 0;
}