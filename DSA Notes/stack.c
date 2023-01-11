#include <stdio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();
int data[5];
int top = -1;
int main()
{
    int choice;
    printf("1. push\n");
    printf("2. traversen \n");
    printf("3. pop \n");
    printf("4. Exit from program \n");
    do{
    printf("Enter your choice \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        traverse();
        break;
    case 3:
       pop();
       break;
    case 4:
       exit(0);
    }

    }while(choice!=4);
    return 0;
}
void push()
{
    int item;
    if (top == 4)
    {
        printf("Your stack is full \n");
    }
    else
    {
        printf("Enter your item \n");
        scanf("%d", &item);
        top = top + 1;
        data[top] = item;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("your stack is Empty \n");
    }
    else{
       

        top=top-1;
    }
}
void traverse(){
int i;
if(top==-1){
    printf("stack is Empty \n");
}
else{
    printf("your elements in LIFO order \n");
    for(i=top;i>=0;i--){
        printf("element %d = %d \n ",i,data[i]);
    }
}
}