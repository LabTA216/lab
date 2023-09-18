#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
typedef struct Node dlist;

dlist* inputdlist(dlist ** head,int n){
    (*head)->next=NULL;
    dlist * p=* head;
    for (int i = 0; i < n; i++)
    {
        dlist * ptr=(dlist*)malloc(sizeof(dlist));
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
    return p;
}



void printdlist(dlist * head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
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
int main(int argc, char const *argv[])
{
    dlist *tail,* head=(dlist*)malloc(sizeof(dlist)),*p,*k;
     head->next=NULL;
     printf("Enter the number of elements ");
     int n;
     scanf("%d",&n);
    tail=inputdlist(&head,n);
    // printdlist(head);
    k=convertd(head);
    // printdlist(k);
    printdlist(k);
    return 0;
}
