#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
typedef struct Node llist;
void deletelist(llist** head,int n){
    llist *k,* p=* head;
    if (n==0)
    {
        *head=p->next;
    }
    else{
        for (int i = 0; i < n-1; i++)
        {
            p=p->next;
        }
    
        k=p->next;
        p->next=k->next;
    }
}
int inputndList(llist ** head,int n){
    (*head)->next=NULL;
    int a[1000]={0};
    llist * p=* head;

        int x;
    for (int i = 0; i < n; i++)
    {
        llist * ptr=(llist*)malloc(sizeof(llist));
        cin>>x;
        a[x-1]++;
        
        p->data=x;
        if(a[x-1]>1){
            break;
        }
        if(i==n-1){
            p->next=NULL;
            break;
        }
        p->next=ptr;
        p=p->next;
    }
    return x;
}

    
   
    

void printlist(llist * head) {
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
    cout<<inputndList(&head,n);
    // printlist(head);
    // printlist(head);

    
    return 0;
}

 