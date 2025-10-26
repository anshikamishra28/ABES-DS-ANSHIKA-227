#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;
    int top;
    int *arr;

};
int IsEmpty(struct Stack *ptr){
    if(ptr->top==-1)
    return 1;
    else
    return 0;
}
int IsFull(struct Stack *ptr){
    if(ptr->top==ptr->size-1)
    return 1;
    else
    return 0;
}

void push(struct Stack *ptr , int val){
    if(IsFull(ptr)){
        printf("stack overflow cannot push %d to the stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }

}
int pop(struct Stack *ptr){
    if(IsEmpty(ptr)){
        printf("stack underflow ! cannot pop from the stack\n");

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int main(){
struct Stack *s;
s->size=6;
s->top=-1;
s->arr=(int *)malloc(s->size*sizeof(int));
s->arr[0]=230;
s->top++;
if(IsEmpty(s))
printf("Empty");
else
printf("Full");

printf()

}