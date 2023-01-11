#include<stdio.h>
#include<stdlib.h>
struct array{
    int total_size;
    int used_size;
    int *ptr;
};
void creatarray(struct array*a,int t_size,int u_size){
    a->total_size=t_size;
    a->used_size=u_size;
    a->ptr=(int*)malloc(t_size*sizeof(int));
}
void inserting(struct array*p){
    int n;
    for(int i=0;i<(p->used_size);i++){
        printf("Enter %dth element \n",i+1);
        scanf("%d",&n);
        (p->ptr)[i]=n;
    }
}
void traversal(struct array*p){
    int n;
    for(int i=0;i<(p->used_size);i++){
        n=(p->ptr)[i];
        printf("Element: %d \n",n);
    }
}
void sorted(struct array*p){
    int temp;
    for(int i=0;i<(p->used_size);i++){
        for(int j=i+1;j<(p->used_size);j++){
        if((p->ptr)[j]>(p->ptr)[i]){
            temp=(p->ptr)[i];
            (p->ptr)[i]=(p->ptr)[j];
            (p->ptr)[j]=temp;
        }
    }
    }
}
    void deleted(struct array*p,int val){
        for(int i=0;i<(p->used_size);i++){
            if((p->ptr)[i]==val){
                for(int j=i+1;j<(p->used_size);j++){
                    (p->ptr[i])=(p->ptr[j]);
                }
                p->used_size--;
            }
    }
    }

int main(){
     struct array arr;
     creatarray(&arr,20,10);
     inserting(&arr);
     deleted(&arr,23);
     sorted(&arr);
     traversal(&arr);
         return 0;
}

