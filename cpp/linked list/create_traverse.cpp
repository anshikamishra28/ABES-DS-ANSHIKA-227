#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};
void lltraverse(struct Node*p){
    while(p!=NULL){
        cout<<"element :"<<p->data<<endl;
        p=p->next;
    }
}
struct Node *InsBeg(struct Node*head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;

}

struct Node *InsAfter(struct Node*head,struct Node *prevNode,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->next=prevNode->next;
    prevNode->next=ptr;

}

struct Node *InsEnd(struct Node*head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=NULL;
    return head;
}

struct Node *DelBeg(struct Node *head){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    p=head;
    head=head->next;
    free(p);
    return head;

}
struct Node *DelEnd(struct Node *head){
     struct Node *p=head;
     struct Node *q=head->next;
     while(q->next!=NULL){
        p=p->next;
        q=q->next;
     }
     p->next=NULL;
     free(q);
     return head;
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=10;
    fourth->next=NULL;
    lltraverse(head);
    head=InsBeg(head,55);
    cout<<"after insertion"<<endl;
    lltraverse(head);

    head=DelBeg(head);
    cout<<"first deleted"<<endl;
    lltraverse(head);

    head=DelEnd(head);
    cout<<"deleted last"<<endl;
    lltraverse(head);




}