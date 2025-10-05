#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;

};
void lltraverse(struct Node* head){
    struct Node *ptr=head;
    do{
    cout<<"element is : "<<ptr->data<<endl;
    ptr=ptr->next;

    } while(ptr!=head);
    //print first element cause initialy ptr= head
}

struct Node *Ins(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    // at this point p points to the last node of the circular ll
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;


}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //allocate memory inside the heap dynamically

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    //linked first and second 
    head->data=4;
    head->next=second;

    //second and third
    second->data=3;
    second->next=third;

    //third and fourth
    third->data=6;
    third->next=fourth;

    // last with head
    fourth->data=1;
    fourth->next=head;

    lltraverse(head);
  

    head=Ins(head,55);
    cout<<"after insertion"<<endl;
    lltraverse(head);
  return 0;
   
   



}