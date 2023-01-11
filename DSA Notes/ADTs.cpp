// #include<iostream>
// using namespace std;
// struct myArray{
//     int total_len;
//     int used_len;
//     int* ptr;
// };
// void creatmyarray(struct myArray* a,int tlen,int ulen){
//     a->total_len=tlen;
//     a->used_len=ulen;
//     a->ptr=(int*)malloc(tlen*sizeof(int));
// }
// void setval(struct myArray* a){
//     int n;
//     for(int i=0;i<(a->used_len);i++){
//         printf("Enter the element no %d ",i+1);
//         scanf("%d",&n);
//         (a->ptr)[i]=n;
//     }
// }
// void getval(struct myArray* a){
//     int n;
//     for(int i=0;i<(a->used_len);i++){
        
//         printf("%d \n",(a->ptr)[i]);
 
//     }
// }
// int main(){
// struct myArray gavnish;
// creatmyarray(&gavnish,10,3);
// setval(&gavnish);
// getval(&gavnish);
//     return 0;
// }
#include<iostream>
using namespace std;
struct array{
    int total;
    int used;
    int *ptr;
};
void create_array(struct array * arr,int a,int b){
    arr->total=a;
    arr->used=b;
    arr->ptr= new int[b];
}
void set_val(struct array *arr,int n){
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        (arr->ptr)[i]=x;
    }
}
void display(struct array *arr){
    for(int i=0;i<(arr->used);i++){
        cout<<(arr->ptr)[i]<<" ";
    }
}
int main(){
    struct array gavnish;
    array * ptr=&gavnish;
    create_array(ptr,10,5);
    set_val(ptr,ptr->used);
    display(ptr);
    return 0;
}