#include<stdio.h>
#include<string.h>
void display(int A[],int m){
    for(int i=0;i<m;i++){
       printf(" %d ",A[i]);
    }
    printf("\n");
}
void countSort(int A[],int n){
    int max=A[0],k=0;
    for(int j=1;j<n;j++){
        if(max<A[j]){
            max=A[j];
        }
    }
    int count[max+1];
    memset (count, 0, sizeof(count));
    for(int i=0;i<n;i++){
        count[A[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(count[i]==0){
            continue;
        }
        while(count[i]!=0){
            A[k]=i;
            k++;
            count[i]--;
        }
    }
    
}
int main(){
    int A[]={6,2,8,5,1,5,6,17,11,13,24,19};
    int n=12;
    countSort(A,n);
    display(A,n);
    return 0;
}