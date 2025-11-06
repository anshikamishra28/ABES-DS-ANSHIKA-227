#include<stdio.h>
int f=-1,r=-1,n;
void EnQueue(int Queue[],int n,int ele){
    if( f==(r+1)%n  || (f==0 && r==n-1)){
    printf("overflow");
    return;
}
    if(f==-1){
        f=r=0;
    }
    else{
        r=(r+1);
    }
    Queue[r]=ele;
}
int DeQueue(int Queue[],int n){
    if (f==-1){
        printf("underflow");     
    }
    int x=Queue[f];
    if(f==r){
        f=r=-1;
    }
    else{
        f=(f+1)%n;
    }    
    return x;
}
void Display(int Queue[],int n){
    if(f==-1){
        printf("empty");
        return ;
    }
    int i=f;
    do{
        printf("%d",Queue[i]);
        i=(i+1)%n;
    }while (i!=(r+1)%n);
    printf("\n");  
}
int main(){
    int ele;
    printf("Enter the size :");
    scanf("%d",&n);
    int Queue[n];
    int choice;
    do{
        printf("\n1.Insert\n2.Delete\n3.display\n4.exit");
        printf("\nenter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                printf("enter the data : ");
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
                printf("exiting..");
                break;
            default:
                printf("invalid\n");
        }
    }
    while(choice!=4);  
    return 0;
}