#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct Node{
    int data;
    struct Node*next;

}*A,*B,*C;
 void traverseNode(Node*A,Node*ptr){
    ptr=A;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void countNode(Node*A,Node*ptr){
    ptr=A;
    int count=0;
    while(ptr!=0){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        count++;
    }
    cout<<"\nTotal nodes : " <<count;
}
int InsBeg(Start,x){

}
int main(){
    A=(struct Node*)malloc(sizeof(struct Node));
    A->data=10;
    A->next=(struct Node*)malloc(sizeof(struct Node));
    A->next->next=nullptr;
    Node* ptr=nullptr;
    traverseNode(A,ptr);
    countNode(A,ptr);   

    return 0;
}