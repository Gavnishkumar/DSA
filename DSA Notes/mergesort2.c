#include<stdio.h>
void display(int A[],int m){
    for(int i=0;i<m;i++){
       printf(" %d ",A[i]);
    }
    printf("\n");
}
void mergesort(int A[],int B[],int C[],int n,int m){
    int i=0,j=0,k=0;
    while(i<=n && j<=m){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<=n){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<=m){
        C[k]=B[j];
        j++;
        k++;
    }
}
int main(){
    int A[]={2,4,6,8,9};
    int B[]={3,5,6,7};
    int n=5;
    int m=4;
    int C[m+n];
    display(A,n);
    display(B,m);
    mergesort(A,B,C,n,m);
    display(C,m+n);
    return 0;
}