#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node* start = NULL;
struct node* getNode() {
    struct node* q = (struct node*)malloc(sizeof(struct node));
    q->next = NULL;
    return q;
}
struct node* InsBeg(struct node* start, int y) {
    struct node* p = getNode();
    p->data = y;
    p->next = start;
    start = p;
    return start;
}
struct node* InsEnd(struct node* start, int y) {
    struct node* p = getNode();
    p->data = y;
    if (start == NULL) {
        start = p;
    } else {
        struct node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
    }
    return start;
}
struct node* InsAfter(struct node* start, int key, int y) {
    struct node* temp = start;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with value %d not found\n", key);
        return start;
    }
    struct node* p = getNode();
    p->data = y;
    p->next = temp->next;
    temp->next = p;
    return start;
}
int count_nodes(struct node* start) {
    int count = 0;
    struct node* temp = start;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
int search(struct node* start, int value) {
    struct node* temp = start;
    while (temp != NULL) {
        if (temp->data == value) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
void display(struct node* start) {
    struct node* temp = start;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int p, choice, key, x;
    do {
        printf("\n1. Insert from beginning\n");
        printf("2. Insert after a node\n");
        printf("3. Insert at end\n");
        printf("4. Count nodes\n");
        printf("5. Search for a value\n");
        printf("6. Display list\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &p);
                start = InsBeg(start, p);
                break;
            case 2:
                printf("Enter data and key: ");
                scanf("%d %d", &p, &key);
                start = InsAfter(start, key, p);
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &p);
                start = InsEnd(start, p);
                break;
            case 4:
                printf("Number of nodes: %d\n", count_nodes(start));
                break;
            case 5:
                printf("Enter value to search: ");
                scanf("%d", &x);
                if (search(start, x))
                    printf("Value found in list.\n");
                else
                    printf("Value not found.\n");
                break;
            case 6:
                display(start);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 7);

    return 0;
}
