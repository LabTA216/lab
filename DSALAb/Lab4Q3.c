#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int detectLoop(struct Node* list)
{
    struct Node *slow_p = list, *fast_p = list;
    while (slow_p && fast_p && fast_p->next) {
    slow_p = slow_p->next;
    fast_p = fast_p->next->next;
    if (slow_p == fast_p) {
    return 1;
    }
    }
    return 0;
}
int main()
{
    struct Node* head = NULL;
    struct Node* temp = NULL;
    int num, count;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &count);
    printf("enter elements:\n");
    for (i = 0; i < count; i++) {
    printf(" %d: ", i + 1);
    scanf("%d", &num);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->next = NULL;
    if (head == NULL) {
    head = newNode;
    temp = newNode;
    } else {
    temp->next = newNode;
    temp = temp->next;
    }
    }
    if (detectLoop(head))
    printf("Loop found");
    else
    printf("No Loop");
    return 0;
}
