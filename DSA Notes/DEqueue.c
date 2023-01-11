#include<stdio.h>
#include<stdlib.h>
struct array{
    int f;
    int r;
    int size;
    int *arr;
};
void printDEqueue(struct array*p){
    for(int i=p->f+1;i<=p->r;i++){
        printf("%d \n",p->arr[i]);
    }
}
void insertaqueueatREAR(struct array*p,int data){
    if(p->r==p->size-1){
        printf("queue is full \n");
    }
    else{
        p->r++;
        p->arr[p->r]=data;
    }
}
 int deletatfront(struct array*p){
    int val=-1;
    if(p->r==-1){
        printf("queue is Empty \n");
    }
    else{
        p->f++;
        val=p->arr[p->f];
    }
    return val;
}
void insertatfront(struct array*p,int val){
    if(p->f==-1){
        printf("insertion in front can't be done \n");
    }
    else{
        p->arr[p->f]=val;
        p->f--;
    }
}
int deltedfromend(struct array*p){
    int val=-1;
    if(p->r==-1){
        printf("you do not have element at end to delete \n");
    }
    else{
        val=p->arr[p->r];
        p->r--;
    }
    return val;
}
int main(){
    struct array*p=(struct array*)malloc(sizeof(struct array));
    p->size=10;
    p->f=-1;
    p->r=-1;
    p->arr=(int*)malloc(sizeof(int)*p->size);
    insertaqueueatREAR(p,23);
    insertaqueueatREAR(p,24);
    insertaqueueatREAR(p,25);
    insertaqueueatREAR(p,26);
    printf("you have deleted: %d\n",deletatfront(p));
    printf("you have deleted: %d\n",deletatfront(p));
    printDEqueue(p);
    insertatfront(p,14);
    insertatfront(p,56);
    printf("After inserting 14,56 in front end \n");
    printDEqueue(p);
    // printf("%d\n",p->arr[0]);
    // printf("%d\n",p->arr[1]);
    printf("After deleting from end \n");
    printf("i have deleted %d \n",deltedfromend(p));
    printDEqueue(p);

    return 0;
}