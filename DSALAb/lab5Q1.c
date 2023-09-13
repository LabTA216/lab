// is list palindrome
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

void printList(list * head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
}

int palindromeList( list * p){
    list * k = p,*c;
    k=revList(k);
    c=k;
    // printList(c);
    while (p!= NULL)
    {
        if (p->data!=k->data)
        {
            return 0;
        }
        p=p->next;
        k=k->next;
        
    }
    return 1;
}

int main(int argc, char const *argv[])
{
     list * head=(list*)malloc(sizeof(list)),*p,*k;
     head->next=NULL;
     printf("Enter the number of elements ");
     int n;
     scanf("%d",&n);
     printf("Enter the elements \n");
     p=head;
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
    p=head;
    // printList(p);
    p=head;
    if (palindromeList(p))
    {
        printf("yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}


