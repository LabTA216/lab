#include<stdio.h>
struct Node {
   int data;
   struct Node* next;
};
 int main(){
    struct Node* head=NULL;
    struct Node* temp=NULL;
    printf("Enter the number of elements ");
    int n;
    scanf("%d",&n);
    printf("\nEnter Data");
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d",&num);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = num;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } 
        else {
            temp->next = newNode;
            temp = temp->next;
        }
   }

    
    
    
    return 0;
 }
