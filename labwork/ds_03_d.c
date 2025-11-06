#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* CreateNode(int data) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

struct node* InsEnd(struct node* head, int data) {
    struct node* new = CreateNode(data);
    if (head == NULL) {
        return new;
    } else {
        struct node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }
    return head;
}


void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node* ReverseList(struct node* head){
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
int main(){
    struct node* head=NULL;
    int n,data;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        head = InsEnd(head, data);
    }

    printf("\nOriginal Linked List:\n");
    display(head);

    head = ReverseList(head);

    printf("\nReversed Linked List:\n");
    display(head);

    return 0;
}