#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int top;
    int size;
    char *arr;
};


 
char stacktop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
 
int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}
char *infixtopost(char *a)
{
    int i = 0, j = 0;
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->top = -1;
    p->size = 100;
    p->arr = (char *)malloc(sizeof(char) * p->size);
    char *post = (char *)malloc(sizeof(char) * strlen(a + 1));
    while (a[i] != '\0')
    {
        if (!isOperator(a[i]))
        {
            post[j] = a[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(a[i]) > precedence(stacktop(p)))
            {
                push(p, a[i]);
                i++;
            }
            else
            {
                post[j] = pop(p);
                j++;
            }
        }
    }
    while (!isEmpty(p))
    {
        post[j] = pop(p);
        j++;
    }
    post[j] = '\0';
    return post;
}

int main()
{
    char *exp = "a+b*h*J/u+a-8*e";
    printf("your postfix expression is: %s", infixtopost(exp));
    return 0;
}