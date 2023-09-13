#include <stdlib.h>
#include<stdio.h>
struct Node {
int data;
struct Node* next;
};
void insert(struct Node** head, int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
    *head = newNode;
    } else {
    struct Node* temp = *head;
    while (temp->next != NULL) {
    temp = temp->next;
    }
    temp->next = newNode;
    }
}
void segregateEvenOdd(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
    return;
    }
    struct Node* evenStart = NULL;
    struct Node* evenEnd = NULL;
    struct Node* oddStart = NULL;
    struct Node* oddEnd = NULL;
    struct Node* current = *head;
    while (current != NULL) {
    if (current->data % 2 == 0) {
    if (evenStart == NULL) {
    evenStart = current;
    evenEnd = evenStart;
    } else {
    evenEnd->next = current;
    evenEnd = current;
    }
    }
    else {
    if (oddStart == NULL) {
    oddStart = current;
    oddEnd = oddStart;
    } else {
    oddEnd->next = current;
    oddEnd = current;
    }
    }
    current = current->next;
    }
    if (evenStart == NULL || oddStart == NULL) {
    return;
    }
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    *head = evenStart;
}

void printList(struct Node* head) {
    while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
    }
    printf("\n");
}

int main() {
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
    printf("Original Linked List: ");
    printList(head);
    segregateEvenOdd(&head);
    printf("Segregated Linked List: ");
    printList(head);
    while (head != NULL) {
    struct Node* temp = head;
    head = head->next;
    free(temp);
    }
    return 0;
}