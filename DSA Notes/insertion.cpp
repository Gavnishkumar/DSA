#include<iostream>
using namespace std;
void display(int arr[],int length){
    for(int i=0;i<length;i++){
        cout<<arr[i];
    }
}
void elementinsertion(int arr[],int length,int index,int element){
    for(int i=length-1;i>=index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=element;

}

int main(){
    int arr[100]={2,3,4,5,7};
    display(arr,5);
    cout<<"After inserting 0 at an index 3"<<endl;
    elementinsertion(arr,6,3,0);
    display(arr,6);
    return 0;
}