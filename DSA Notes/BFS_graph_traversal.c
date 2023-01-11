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
        // printf("your element at index %d is %d \n",p->b,p->arr[p->b]);
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
    q.size=400;
    q.f=q.b=0;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    int node;
    int i=9;
    int visited[10]={0,0,0,0,0,0,0,0,0,0};
    int a[10][10]={
    {0,1,0,0,0,1,0,0,0,0},
    {1,0,1,0,0,0,0,0,0,0},
    {0,1,0,0,1,1,0,0,0,0},
    {0,0,0,0,1,0,0,1,0,0},
    {0,0,1,1,0,0,0,0,0,0},
    {1,0,1,0,0,0,1,0,0,0},
    {0,0,0,0,0,1,0,1,0,0},
    {0,0,0,1,0,0,1,0,0,1},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,0,0}
};

    printf("%d",i);
    visited[i]=1;
    queue(&q,i);
    while(!isEmpty(&q)){
        node=dequeue(&q);
        for(int j=0;j<10;j++){
            if(a[node][j]==1 && visited[j]==0){
                visited[j]=1;
                queue(&q,j);
                printf(" %d ",j);
            }
        }
    }

    return 0;
}
