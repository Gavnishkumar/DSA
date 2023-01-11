#include<stdio.h>
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}
void insertionsort(int *arr,int n){
   int temp,j;
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0){
        arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
int arr[]={3,6,4,8,4,7,312,45,23,67,34,78};
int n=12;
display(arr,n);
printf("\n");
insertionsort(arr,n);
display(arr,n);

    return 0;
}