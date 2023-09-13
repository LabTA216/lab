#include <stdio.h>

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node list;

void printList(list *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    list *head = NULL;
    int n, c;
    int i;
    printf("Enter the number of elements ");
    scanf("%d", &c);
    printf("Enter elements \n");
    for (i = 0; i < c; i++) {
        
        scanf("%d", &n);
        list *ptr = (list *)malloc(sizeof(list));
        if(i<c){
            ptr->data = n;
            ptr->next = head;
            head = ptr;
        }else if(i==c){
            ptr->data = n;
            ptr->next = head;
        }
        
    }
    
    printList(head);

    return 0;
}