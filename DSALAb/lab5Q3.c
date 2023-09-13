#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
typedef struct Node list;
list * revList(list * head){
      list * prev = NULL;
      list * current = head;
      list * next = NULL;
      while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
      }
      return prev;
}
void printListk(struct Node* p,int n) {
   
    int i=n;
    list * head =p;
      while (head != NULL) {
        if(i>1 && head->data!=0){
            printf("%dx^%d+", head->data,i);

        }
        else if((i==1 && head->data!=0)){
            printf("%dx+", head->data);

        }
        else if(head->data!=0){
            printf("%d\n", head->data);
        }
      i--;
      head = head->next;
   }
   printf("\n");
}
void inputList(list ** head,int n){
    (*head)->next=NULL;
    list * p=* head;
    for (int i = 0; i < n; i++)
    {
        list * ptr=(list*)malloc(sizeof(list));
        int x;
        scanf("%d",&x);
        p->data=x;
        if(i==n-1){
            p->next=NULL;
            break;
        }
        p->next=ptr;
        p=p->next;
    }
}
void printList(list * head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
}
int main(int argc, char const *argv[])
{
    list * head=(list*)malloc(sizeof(list)),*p,*k;
     head->next=NULL;
     printf("Enter the number of elements ");
     int n;
     scanf("%d",&n);
    inputList(&head,n);
    // printList(head);
    k=revList(head);
    // printList(k);
    printListk(k,n-1);
    return 0;
}
