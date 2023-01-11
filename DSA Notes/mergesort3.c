#include<stdio.h>
void display(int A[],int m){
    for(int i=0;i<m;i++){
       printf(" %d ",A[i]);
    }
    printf("\n");
}
void mergesort(int A[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int B[high];
    int k=low;
   while(i<=mid && j<=high){
    if(A[i]<A[j]){
        B[k]=A[i];
        i++;
        k++;
    }
    else{
        B[k]=A[j];
        j++;
        k++;
    }

   }
   while(i<=mid){
    B[k]=A[i];
    k++;
    i++;
   }
   while(j<=high){
    B[k]=A[j];
    k++;
    j++;
   }
    for(i=0;i<=high;i++){
        A[i]=B[i];
    }
}
int main(){
    int A[]={2,4,5,3,6,8,9};
    int n=7;
    display(A,n);
    int low=0;
    int mid=2;
    int high=6;
    mergesort(A,low,mid,high);
    display(A,n);
    return 0;
}