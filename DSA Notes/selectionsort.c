#include<stdio.h>
    void display(int arr[], int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                int temp=min;
                min=arr[j];
                arr[j]=temp;
            }
            arr[i]=min;
        }
    }
}
int main(){
    int arr[]={34,23,67,56,76,12,35,63,78,98,43};
    int n=11;
    display(arr,n);
    selectionsort(arr,n);
    display(arr,n);

    return 0;
}