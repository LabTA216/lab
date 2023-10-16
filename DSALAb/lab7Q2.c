// use stack for evaluation of equation in postfix

#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node list;

list * stack;

void display() {
    list * s=stack->next;
    if(s == NULL){
        printf("stack is Empty\n");
    }
    else{
        printf("Result is ");
        while (s != NULL) {
        
        printf("%d ", s->data);
        s = s->next;
        }
        printf("\n");
    }

    
}

void push(int x){
    list *ptr=(list *) (malloc(sizeof(list)));
    ptr->next=stack->next;
    ptr->data=x;
    stack->next=ptr;
}
int isStackEmpty(){
    list *s= stack->next; 
    if(s==NULL){
        printf("stack underflow\n");
        return 1;
    }
    return 0;
}

int pop(){
    list *s= stack->next; 
    if(s==NULL){
        printf("stack underflow\n");
    }
    else{
        // list * s = stack->next;
        int n=s->data;
    
        stack->next=s->next;
        return n;
        
    }
}


int main(int argc, char const *argv[])
{
    stack = (list *) (malloc(sizeof(list)));
    stack->next=NULL;
    char eqn[50];
    scanf("%s",eqn);
    for (int i = 0; eqn[i]; i++)
    {
        if (eqn[i]>='0' && eqn[i]<='9')
        {
            push((int)eqn[i]-48);
            // display();
        }
        else{
            int a,b;
            if(isStackEmpty()){
                printf("Error\n");
                break;
            }else{
                b=pop();
            }
            if(isStackEmpty()){
                printf("Error\n");
                break;
            }else{
                a=pop();
            }
            switch(eqn[i]){
                case '+': push(a+b); break;
                case '-': push(a-b); break;
                case '*': push(a*b); break;
                case '/': push(a/b); break;
                case '%': push(a%b); break;
            }
        }
    }
    display();
        
    return 0;
}
