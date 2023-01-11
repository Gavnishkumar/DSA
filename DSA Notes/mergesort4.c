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
    int B[100];
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
void MS(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MS(A,low,mid);
        MS(A,mid+1,high);
        mergesort(A,low,mid,high);
    }
}
int main(){
    int A[]={3,1,7,3,9,5,4,3,12,34,11,23};
    int n=12;
    display(A,n);
    int low=0;
    int high=11;
    MS(A,low,high);
    display(A,n);
    return 0;
}

