// check if two stacks are identical or not
#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node list;
int top=-1;

int * aStack;

int aPop(){
    if(top==-1){
        printf("aStack underflow\n");
        return -1;
    }
        return aStack[top--];
    

}
void aPush(int x){
    top++;
    *(aStack+top)=x;
    

}



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

int checkEquality() {
    list * s=stack->next;
    if(s == NULL && top==-1){
        return 0;
    }
    else{
        while (s != NULL) {
            printf("%d, %d \n",s->data,aPop());
        // if(s->data!=aStack[top]){return 0;}
        s = s->next;
        top--;
        
    }
    }
    return 1;
    
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

void adisplay(){
    if(top==-1){
        printf("aStack is Empty\n");
    }
    else{
        printf("aStack elements are\n");
        for (int i = top; i >= 0 ; i--)
        {
            printf("%d ",aStack[i]);
        }
        printf("\n");
    }
    
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
int main(){
    aStack = (int *)malloc(sizeof(int));
    aPush(3);
    aPush(4);
    aPush(6);
    aPush(9);
    adisplay();
    stack = (list *) (malloc(sizeof(list)));
    stack->next=NULL;
    push(3);
    push(4);
    push(6);
    push(9);
    display();
    printf("\nEquality %d",checkEquality());
   
    return 0;



}