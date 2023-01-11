#include<stdio.h>
#include<stdlib.h>
struct MyArray{
    int t_size;
    int u_size;
    int *arr;
};
void creatarray(struct MyArray*p,int total_size,int used_size){
    p->t_size=total_size;
    p->u_size=used_size;
    p->arr=(int*)malloc(total_size*sizeof(int));
}
void inseartdata(struct MyArray*p){
    int n;
    for(int i=0;i<p->u_size;i++){
    printf("Enter the data at index %d : ",i+1);
    scanf("%d",&n);
    p->arr[i]=n;
}
}
int binarysearch(struct MyArray*p,int element){
    int low=0,high=p->u_size-1;
    int mid=(low+high)/2;
    while(p->arr[mid]!=element){
        if(element>p->arr[mid] && element<p->arr[high]){
            low=mid;
            mid=(low+high)/2;
        }
       else if(element<p->arr[mid] && element>p->arr[low]){
        high=mid;
        mid=(low+high)/2;
       }
    }
    return mid;
}
void traversal(struct MyArray*p){
    for(int i=0;i<p->u_size;i++){
    printf("Element: %d \n",p->arr[i]);
}
}
int main(){
struct MyArray*ptr=(struct MyArray*)malloc(sizeof(struct MyArray));
creatarray(ptr,50,10);
inseartdata(ptr);
traversal(ptr);
int data=binarysearch(ptr,23);
printf("your data is found at %d ",data+1);
    return 0;
}