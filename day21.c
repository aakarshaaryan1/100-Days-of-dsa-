#include <stdio.h>
#include <stdlib.h>

// Define the structure of a Node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, value;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    // 1. Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    // 2. Create the list
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        // Allocate memory for a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            // First node becomes the head
            head = newNode;
            temp = head;
        } else {
            // Link the previous node to the new node
            temp->next = newNode;
            temp = temp->next;
        }
    }

    // 3. Traverse and Print
    temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");

    // 4. Free memory (Good practice!)
    temp = head;
    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}