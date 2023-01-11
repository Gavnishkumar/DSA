#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char*arr;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr,char val){
    if(isFull(ptr)){
        printf("Your stack is full\n");
    }
    else{
        
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("Your stack is empty\n");
    }
    else{
        ptr->top--; 
    }
}
void traversal(struct stack *ptr){
    while(ptr->top>=0){
    if(isEmpty(ptr)){
        printf("Your stack is empty\n");
    }
    else{
        printf("Element: %c \n",ptr->arr[ptr->top]);
        ptr->top--;
    }
    }
}
int paranthesismatching(char *exp){
        struct stack*p=(struct stack*)malloc(sizeof(struct stack));
        p->size=6;
        p->top=-1;
        p->arr=(char*)malloc(p->size*sizeof(char));
        for(int i=0;exp[i]!='\0';i++){
            if(exp[i]=='('){
                push(p,exp[i]);
            }
            else if(exp[i]==')'){
                if(isEmpty(p)){
                    return 0;
                }
                pop(p);
            }
        }
           if(isEmpty(p)){
        return 1;
    }
    else{
        return 0;
    }

}                                                 
int main(){
        char *arr="((()))";
        if(paranthesismatching(arr)){
            printf("parenthesis match and are correct \n");
        }
        else{
            printf("paranthesis is not matching \n");
        }
    return 0;
}