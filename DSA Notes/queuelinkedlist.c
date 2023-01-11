#include<stdio.h>
#include<stdlib.h>
struct node*f=NULL;
struct node*r=NULL;

struct node
{
    int data;
    struct node*next;
};
void linklisttraversal(struct node*ptr){
    if(ptr==NULL){
        printf("your list is empty \n");
    }
    while(ptr !=NULL){
        printf("element is: %d \n",ptr->data);
        ptr=ptr->next;
    }

}
void creatqueue(int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("your queue is full \n");
    }
    else{
        ptr->data=data;
        ptr->next=NULL;
        if(f==NULL){
            f=ptr;
            r=ptr;
        }
        else{
            r->next=ptr;
            r=ptr;
        }
    }
}
int dequeue(){
    int val=-1;
    if(f==NULL){
        printf("your list is empty \n");
    }
    else{
     val=f->data;
        f=f->next;
    
    }
        return val;
}
 int main(){
    linklisttraversal(f);
    creatqueue(23);
    creatqueue(24);
    creatqueue(25);
    creatqueue(26);
    creatqueue(27);
    creatqueue(28);
    creatqueue(29);
    linklisttraversal(f);
    dequeue();
    dequeue();
    dequeue();
    printf("The val at f is %d \n",f->data);
    linklisttraversal(f);


 }