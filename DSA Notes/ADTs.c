#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_len;
    int used_len;
    int *ptr;
};
void createarray(struct myArray* a,int tlen,int ulen){
    (*a).total_len=tlen;
    (*a).used_len=ulen;
    (*a).ptr=(int*)malloc(tlen*sizeof(int));
}
void show(struct myArray* a){
    for(int i=0;i<(*a).used_len;i++){
        printf("%d \n",(*a).ptr[i]);
    }
}
void insert(struct myArray* a){
    int n;
    for(int i=0;i<(*a).used_len;i++){
        printf("Enter the element no %d ",i+1);
        scanf("%d",&n);
        ((*a).ptr)[i]=n;
    }
}

int main(){
    struct myArray gavnish;
    createarray(&gavnish,10,3);
    insert(&gavnish);
    show(&gavnish);
    return 0;
}