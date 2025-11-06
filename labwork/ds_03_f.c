#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* last = NULL;

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* addToEmpty(int data) {
    struct Node* newNode = createNode(data);
    last = newNode;
    last->next = last;
    return last;
}

struct Node* InsBeg(int data) {
    if (last == NULL)
        return addToEmpty(data);

    struct Node* newNode = createNode(data);
    newNode->next = last->next;
    last->next = newNode;
    return last;
}

struct Node* InsEnd(int data) {
    if (last == NULL)
        return addToEmpty(data);

    struct Node* newNode = createNode(data);
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}

struct Node* InsAfter(int data, int item) {
    if (last == NULL) {
        printf("List is empty.\n");
        return last;
    }

    struct Node* temp = last->next;
    do {
        if (temp->data == item) {
            struct Node* newNode = createNode(data);
            newNode->next = temp->next;
            temp->next = newNode;
            if (temp == last)
                last = newNode;
            return last;
        }
        temp = temp->next;
    } while (temp != last->next);

    printf("Item %d not found in the list.\n", item);
    return last;
}

struct Node* deleteNode(int key) {
    if (last == NULL) {
        printf("List is empty.\n");
        return last;
    }

    struct Node *curr = last->next, *prev = last;

    if (curr == last && curr->data == key) {
        free(curr);
        last = NULL;
        return last;
    }

    if (curr->data == key) {
        prev->next = curr->next;
        free(curr);
        return last;
    }

    do {
        if (curr->data == key) {
            prev->next = curr->next;
            if (curr == last)
                last = prev;
            free(curr);
            return last;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != last->next);

    printf("Key %d not found.\n", key);
    return last;
}

void display(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

void search(struct Node* last, int key) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = last->next;
    int index = 1;
    do {
        if (temp->data == key) {
            printf("Element %d found at position %d.\n", key, index);
            return;
        }
        temp = temp->next;
        index++;
    } while (temp != last->next);

    printf("Element %d not found in the list.\n", key);
}

int main() {
    int choice, data, key;

    do {
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert After Node\n");
        printf("4. Delete a Node\n");
        printf("5. Display List\n");
        printf("6. Search for a Node\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                last = InsBeg(data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                last = InsEnd(data);
                break;
            case 3:
                printf("Enter the element after which to insert: ");
                scanf("%d", &key);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                last = InsAfter(data, key);
                break;
            case 4:
                printf("Enter element to delete: ");
                scanf("%d", &key);
                last = deleteNode(key);
                break;
            case 5:
                display(last);
                break;
            case 6:
                printf("Enter element to search: ");
                scanf("%d", &key);
                search(last, key);
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid input. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
