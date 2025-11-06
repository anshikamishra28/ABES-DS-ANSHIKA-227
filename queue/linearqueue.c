#include<stdio.h>
int f=-1,r=-1,n;
void EnQueue(int Queue[],int n,int ele){
    if(r==n-1){
    printf("Overflow");
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
int DeQueue(int Queue[],int n){
    if (f==-1){
        printf("Underflow");
        return -1;       
    }
    int x=Queue[f];
    if(f==r){
        f=r=-1;
    }
    else{
        f=f+1;
    }    
    return x;
}
void Display(int Queue[],int n){
    if(f==-1){
        printf("Queue is empty\n");
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
    int choice;
    do{
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                printf("Enter the data : ");
                scanf("%d",&ele);
                EnQueue(Queue,n,ele);
                break;
            case 2 :
                
                printf("%d",DeQueue(Queue,n));
                break;
            case 3 : 
                printf("The queue is :");
                Display(Queue,n);
                break;
            case 4 :
                printf("Exiting..");
                break;
            default:
                printf("Invalid input\n");
        }
    }while(choice!=4);   
    return 0;
}