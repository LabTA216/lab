#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node * next;
};
int main(int argc, char const *argv[])
{
    struct Node *start;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *end;
    start=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));
    fourth=(struct Node*) malloc(sizeof(struct Node));
    end=(struct Node*) malloc(sizeof(struct Node));

    start->data = 5;
    start -> next =second;

    second->data = 21;
    second -> next =third;

    third->data = 11;
    third -> next =fourth;

    fourth->data = 17;
    fourth -> next = end;

    end->data = 17;
    end -> next = NULL;

    int count = 0;
    struct  Node *current = start;
    while (current != NULL)
    {
        count++;
        current=current->next;
    }
    current = start;
    for (int i = 0; i < count/2; i++)
    {
        current=current->next;
    }
    
    printf("Middle element is %d",current->data);


    return 0;
}
