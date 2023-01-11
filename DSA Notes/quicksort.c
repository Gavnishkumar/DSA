#include<stdio.h>
void setdata(int arr[],int *n){
        *n=5;
        arr[0]=5;
        arr[1]=7;
        arr[2]=1;
        arr[3]=8;
        arr[4]=3;
          
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int partition(int arr[],int low ,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }while(i<j);
    temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;
    return j;
}
int quicksort(int arr[],int low,int high){
    int partitionindex;
    if(low<high){
        partitionindex=partition(arr,low,high);
        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);
    }
}
int main(){
   int n;
   int arr[30];
    setdata(arr,&n);
    printArray(arr,n);
    printf("\nyour array after applying quicksort \n");
    quicksort(arr,0 ,n-1);
    printArray(arr,n);
    return 0;
}