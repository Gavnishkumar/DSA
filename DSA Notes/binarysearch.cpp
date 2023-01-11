#include<iostream>
using namespace std;
struct MyArray{
    int used;
    int total;
    int *ptr;
};
int SearchByBinary(int arr[],int element,int size){
    int low=0,mid;
    int high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
         else if(element>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }   
}
int main(){
    int arr[100]={2,4,5,7,8,9,10,22,33,45,56};
    int size=sizeof(arr)/sizeof(int);
    int searchindex=SearchByBinary(arr,2,size);
    cout<<"10 is found at index "<<searchindex<<endl;
    return 0;
}