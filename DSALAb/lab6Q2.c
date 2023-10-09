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
        printf("stack elements are\n");
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
void pop(){
    list *s= stack->next; 
    if(s==NULL){
        printf("stack underflow\n");
    }
    else{
        // list * s = stack->next;
        int n=s->data;
        printf("Popped element is %d \n", n);
    
        stack->next=s->next;
        
        
    }
}


int main(int argc, char const *argv[])
{
    stack = (list *) (malloc(sizeof(list)));
    stack->next=NULL;
    push(3);
    push(4);
    push(6);
    push(9);
    display();
    pop();
    pop();
    display();
    return 0;
}
