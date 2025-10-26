#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
struct node{
        int data;
        struct node *next;

    };
    struct node* start=NULL;
    struct node* getNode(){
        struct node* q=(struct node*)malloc(sizeof(struct node));
        q->next=NULL;
        return q;
}
struct node* InsBeg(struct node* start, int y)
{
    struct node*p=getNode();
    p->data=y;
    p->next=start;
    start=p;
    return start;    
}
struct node*InsEnd(struct node* start,int y){
    struct node* p=getNode();
    p->data=y;
    if (start==NULL){
        start=p;}
    else{
        struct node* temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
    return start;
}
struct node* InsAfter( struct node* start,int key,int y){
    struct node* temp=start;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"node with value"<<key<<"not found";
        return start;
    }
    struct node * p=getNode();
    p->data=y;
    p->next=temp->next;
    temp->next=p;
    return start;
}
int count_nodes(struct node* start){
    int count=0;
    struct node*temp=start;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int search(struct node* start , int value){
    struct node*temp=start;
    while(temp!=NULL){
        if(temp->data==value){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
void display(struct node* start){
    struct node*temp=start;
    
}
int main()
{   
    int p,choice,key;
    cout<<"1. insert from beginning "<<endl;
    cout<<"2. insert after a node"<<endl;
    cout<<"3. insert at end"<<endl;
    cout<<"4. count nodes"<<endl;
    cout<<"5. search for a value"<<endl;
    cin>>choice;
    switch(choice){
        case 1: 
            cout<<"enter the data"<<endl;
            cin>>p;
            start=InsBeg(start,p);
            break;
        case 2:
            cout<<"enter the data and key"<<endl;
            cin>>p>>key;
            start=InsAfter(start,key,p);
            break;
        case 3:
            cout<<"enter the data"<<endl;
            cin>>p;
            start=InsEnd(start,p);
            break;     
        case 4:
            cout<<"number of nodes"<<count_nodes(start)<<endl;
            break;
        case 5:   
            int x;
            cout << "Enter value to search: ";
            cin >> x;
            if (search(start, x)) {
                cout << "Value found in the list." << endl;
            } else {
                cout << "Value not found in the list." << endl;
            }
            break;             
    }
}