#include<stdio.h>
#include<stdlib.h>

int top=-1;

int * aStack;
 
void aPop();
void aPush(int x);


int main(int argc, char const *argv[])
{
    aStack = (int *)malloc(sizeof(int));
    aPush(3);
    aPush(4);
    aPush(6);
    aPush(9);
    display();
    aPop();
    aPop();
    display();
    return 0;
}


void aPop(){
    if(top==-1){
        printf("aStack underflow\n");
    }
    else{
        printf("popped element is %d\n",aStack[top]);
        top--;
    }

}
void aPush(int x){
    top++;
    *(aStack+top)=x;
    

}
void display(){
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










