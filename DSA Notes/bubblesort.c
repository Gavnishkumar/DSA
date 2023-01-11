#include<stdio.h>
#include<stdlib.h>
void printarray(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    
}
void bubblesort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
}

int main(){
    int arr[15]={6,5,9,3,8,5,2,6,4,9,3,7,4,6,8};
    int n=15;
    printarray(arr,n);
    bubblesort(arr,n);
    printf("\n");
    printarray(arr,n);

}