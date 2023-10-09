#include<stdio.h>
#include<stdlib.h>

int top=-1;

int * stack;
 
void pop();
void push(int x);
void display();

int main(int argc, char const *argv[])
{
    stack = (int *)malloc(sizeof(int));
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


void pop(){
    if(top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("popped element is %d\n",stack[top]);
        top--;
    }

}
void push(int x){
    top++;
    *(stack+top)=x;
    

}
void display(){
    if(top==-1){
        printf("stack is Empty\n");
    }
    else{
        printf("stack elements are\n");
        for (int i = top; i >= 0 ; i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
    
}










