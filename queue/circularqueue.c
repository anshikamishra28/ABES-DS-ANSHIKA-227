 
#include<stdio.h> 
#include<stdlib.h> 
int a[100]; 
int f=-1,r=-1; 
void Enqueue(int a[],int ele,int n){ 
    if((f==0 && r==n-1)||(r+1)%n == f){ 
        printf("Overflow\n"); 
        return; 
    } 
    if(f==-1)f=0; 
    r=(r+1)%n; 
    a[r]=ele; 
} 
int Dequeue(int a[],int n){ 
    if(f==-1){ 
        printf("Underflow\n"); 
        return -1; 
    } 
    int d=a[f]; 
    if(f==r){ 
        f=-1; 
        r=-1; 
    }else f=(f+1)%n; 
    return d; 
} 
void Display(int a[],int n){ 
    if(f==-1){ 
        printf("Queue is empty\n"); 
        return; 
    } 
    printf("Elements in queue:\n"); 
    int i=f; 
    while(1){ 
        printf("%d\t",a[i]); 
        if(i==r)break; 
        i=(i+1)%n; 
    } 
    printf("\n"); 
} 
int main(){ 
    int choice,ele,n,d; 
    printf("Enter the size of queue:"); 
    scanf("%d",&n); 
    do{ 
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&choice); 
        switch(choice){ 
            case 1: 
                printf("Enter the element:"); 
                scanf("%d",&ele); 
                Enqueue(a,ele,n); 
                break; 
            case 2: 
                d=Dequeue(a,n); 
                if(d!=-1){
                printf("Deleted: %d\n",d); 
                }
                break; 
            case 3: 
                Display(a,n); 
                break; 
            case 4: 
                printf("Exiting...\n"); 
                break; 
            default: 
                printf("Invalid choice\n"); 
        } 
    }while(choice!=4); 
    return 0; 
} 