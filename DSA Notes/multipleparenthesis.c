#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char*arr;
};
int isFull(struct stack*p){
    if(p->top==p->size-1){
        return 1;
        
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack*p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr,char val){
    if(isFull(ptr)){
        printf("stack is full so pls increase size of stack \n");
    }
    else{
    ptr->arr=(char*)malloc(sizeof(char));
    ptr->top++;
    (ptr->arr)[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("your stack is Empty \n");
    }
        ptr->top--;
    return ptr->arr[ptr->top+1];
    
}
int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}
int multiparenthesis(char*ch){
    char popped;
    struct stack*p=(struct stack *)malloc(sizeof(struct stack));
    p->size=20;
    p->top=-1;
    p->arr=(char*)malloc(p->size*sizeof(char));
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='(' || ch[i]=='{' || ch[i]=='['){
            push(p,ch[i]);
        }
        else if(ch[i]==')' || ch[i]=='}' || ch[i]==']'){
             if(isEmpty(p)){
                return 0;
            }
            popped=pop(p);
            if(!match(popped,ch[i])){
                return 0;
            }
            
     
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
    
       char * exp = "[4-6((8){(-8)})]";
    
    if(multiparenthesis(exp)==1){
        printf("The parenthesis is balanced");
    }
    else if(multiparenthesis(exp)==0){
        printf("The parenthesis is not balanced");
    }
    return 0;
}