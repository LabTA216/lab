#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
typedef struct Node dlist;

dlist* inputList(dlist ** head,int n){
    (*head)->next=NULL;
    (*head)->prev=NULL;
    dlist * p=* head,*k=NULL;
    for (int i = 0; i < n; i++)
    {
        dlist * ptr=(dlist*)malloc(sizeof(dlist));
        ptr->next=NULL;
        int x;
        scanf("%d",&x);
        p->data=x;
        if(i==n-1){
            p->next=NULL;
            break;
        }
        p->next=ptr;
        p=p->next;
        p->prev=k;
        k=p;
    }
    return p;
}
void printList(dlist * head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
}
void printListattail(dlist * head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->prev;
   }
   printf("\n");
}
dlist* convertd(dlist* head){
    dlist * t=head,*p=NULL;
    while (t!=NULL)
    {
        t->prev=p;
        p=t;
        t=t->next;
        
    }
    t=head;
    return t;

}

void reversedlist(dlist ** head){
      dlist * current = *head,*t,*l;
      while (current != NULL) {
            t=current->next;
            current->next=current->prev;
            l=current->prev;
            current->prev=t;      
            current=current->prev;

      }
      *head=l->prev;
}

int main(int argc, char const *argv[])
{
    dlist *tail, * head=(dlist*)malloc(sizeof(dlist)),*p,*k;
     head->next=NULL;
     printf("Enter the number of elements ");
     int n;
     scanf("%d",&n);
    tail=inputList(&head,n);
    // printList(head);
    k=convertd(head);
    // printList(k);
    printList(k);
    // printListattail(tail);
    reversedlist(&head);
    printList(head);

    return 0;
}
