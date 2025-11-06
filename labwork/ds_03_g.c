#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* InsBeg(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    return newNode;
}

struct Node* InsEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

struct Node* DelNode(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp && temp->data != key)
        temp = temp->next;
    if (!temp) {
        printf("Node %d not found.\n", key);
        return head;
    }
    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    free(temp);
    return head;
}

void SearchNode(struct Node* head, int key) {
    struct Node* temp = head;
    int pos = 1;
    while (temp) {
        if (temp->data == key) {
            printf("Node %d found at position %d.\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Node %d not found.\n", key);
}

void display(struct Node* head) {
    struct Node* temp = head;
    printf("Forward: ");
    while (temp) {
        printf("%d ", temp->data);
        if (!temp->next) break;
        temp = temp->next;
    }
    printf("\nBackward: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, key;
    do {
        printf("\nDoubly Linked List\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node\n");
        printf("4. Search for a Node\n");
        printf("5. Display List\n");
        printf("6. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                head = InsBeg(head, data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                head = InsEnd(head, data);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &key);
                head = DelNode(head, key);
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &key);
                SearchNode(head, key);
                break;
            case 5:
                display(head);
                break;
            case 6:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 6);
    return 0;
}
