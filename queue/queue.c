#include<stdio.h>
int f,r,n;
void EnQueue(int Queue[],int ele){
    if( f==0 && r==n-1){
    printf("overflow");
    return;
}
    if(f==-1 && r==-1){
        f=r=0;
    }
    else{
        r=r+1;
    }
    Queue[r]=ele;
}
void DeQueue(int Queue[],int f,int r,int *ele){
    if (f==-1){
        printf("underflow");
        return ;
    }
    *ele=Queue[f];
    if(f==r){
        f=r=-1;
    }
    else{
        f=f+1;
    }    
}
void Display(int Queue[]){
    if(f==-1){
        printf("empty");
        return ;
    }
    for(int i=f;i<=r;i++){
        printf("%d ",Queue[i]);
    }
}
int main(){
    int ele;
    printf("Enter the size :");
    scanf("%d",&n);
    int Queue[n];
    printf("enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&Queue[i]);
    }
    printf("enter front : ");
    scanf("%d",&f);
    printf("enter rear : ");
    scanf("%d",&r);
    printf("enter the element to be inserted :");
    scanf("%d",&ele);
    EnQueue(Queue,ele);
    Display(Queue);
    printf("\nEnter the element to be deleted :");
    scanf("%d",&ele);
    DeQueue(Queue,f,r,&ele);
    Display(Queue);
    return 0;
}