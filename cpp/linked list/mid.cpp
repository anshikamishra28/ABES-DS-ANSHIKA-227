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