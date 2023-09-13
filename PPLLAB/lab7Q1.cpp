#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
typedef struct Node llist;

void inputList(llist ** head,int n){
    (*head)->next=NULL;
    llist * p=* head;
    for (int i = 0; i < n; i++)
    {
        llist * ptr=(llist*)malloc(sizeof(llist));
        int x;
        cin>>x;
        p->data=x;
        if(i==n-1){
            p->next=NULL;
            break;
        }
        p->next=ptr;
        p=p->next;
    }
}

void printlist(llist * head) {
    cout<<"\nInput linked list elements are ";
      while (head != NULL) {
      cout<< head->data<<" ";
      head = head->next;
   }
   cout<<"\n";
}

int main(int argc, char const *argv[])
{
    int n;
    llist * head =(llist *)malloc(sizeof(llist));
    cout<<"Enter the number of elements ";
    cin>>n;
    inputList(&head,n);
    printlist(head);

    
    return 0;
}

