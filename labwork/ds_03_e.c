#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff;
    int pow;
    struct Node* next;
};

struct Node* CreateNode(int coeff, int pow) {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->coeff = coeff;
    new->pow = pow;
    new->next = NULL;
    return new;
}

struct Node* InsEnd(struct Node* head, int coeff, int pow) {
    struct Node* new = CreateNode(coeff, pow);
    if (head == NULL) {
        return new;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }
    return head;
}

void display(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->pow);
        if (head->next != NULL && head->next->coeff >= 0)
            printf(" + ");
        else if (head->next != NULL)
            printf(" ");
        head = head->next;
    }
    printf("\n");
}

struct Node* AddPoly(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow > poly2->pow) {
            result = InsEnd(result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        } else if (poly2->pow > poly1->pow) {
            result = InsEnd(result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        } else {
            result = InsEnd(result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1 != NULL) {
        result = InsEnd(result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }

    while (poly2 != NULL) {
        result = InsEnd(result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }

    return result;
}

struct Node* MulPoly(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    for (struct Node* ptr1 = poly1; ptr1 != NULL; ptr1 = ptr1->next) {
        for (struct Node* ptr2 = poly2; ptr2 != NULL; ptr2 = ptr2->next) {
            int coeff = ptr1->coeff * ptr2->coeff;
            int pow = ptr1->pow + ptr2->pow;

           
            struct Node* temp = result;
            struct Node* prev = NULL;
            while (temp != NULL && temp->pow > pow) {
                prev = temp;
                temp = temp->next;
            }
            if (temp != NULL && temp->pow == pow) {
                temp->coeff += coeff;
            } else {
                struct Node* newNode = CreateNode(coeff, pow);
                if (prev == NULL) {
                    newNode->next = result;
                    result = newNode;
                } else {
                    newNode->next = prev->next;
                    prev->next = newNode;
                }
            }
        }
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    int n1, n2, coeff, pow;

    printf("Enter number of terms in first polynomial: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter coefficient and power for term %d: ", i + 1);
        scanf("%d %d", &coeff, &pow);
        poly1 = InsEnd(poly1, coeff, pow);
    }

    printf("\nEnter number of terms in second polynomial: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter coefficient and power for term %d: ", i + 1);
        scanf("%d %d", &coeff, &pow);
        poly2 = InsEnd(poly2, coeff, pow);
    }

    printf("\nFirst Polynomial: ");
    display(poly1);
    printf("Second Polynomial: ");
    display(poly2);

    struct Node* sum = AddPoly(poly1, poly2);
    printf("\nSum of Polynomials:\n");
    display(sum);

    struct Node* product = MulPoly(poly1, poly2);
    printf("\nProduct of Polynomials:\n");
    display(product);

    return 0;
}
