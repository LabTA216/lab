#include <stdio.h>
#include <stdlib.h>
struct Node {
   int data;
   struct Node* next;
};
struct Node* reverseList(struct Node* head) {
      struct Node* prev = NULL;
      struct Node* current = head;
      struct Node* next = NULL;
      while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
      }
      return prev;
}
void printList(struct Node* head) {
      while (head != NULL) {
      printf("%d ", head->data);
      head = head->next;
   }
   printf("\n");
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
   printList(head);
   head = reverseList(head);
   printf("Reversed Linked List: ");
   printList(head);
   while (head != NULL) {
   struct Node* temp = head;
   head = head->next;
   free(temp);
   }
   return 0;
}