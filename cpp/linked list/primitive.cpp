#include<iostream>
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
};
struct node*InsEnd(struct node* start,int y){
    struct node* p=getNode();
    p->data=y;
    if (start!=NULL){
        start=p;}
    else{
        struct node* temp=start;
        while(p->next!=NULL || p!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->next=NULL;
    }
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
    p->next=temp;
}
int main()
{   
    int p,choice,key;
    cin>>choice;
    cout<<"1. insert from beginning "<<endl;
    cout<<"2. insert after a node"<<endl;
    cout<<"3. insert at end"<<endl;
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
    }
}