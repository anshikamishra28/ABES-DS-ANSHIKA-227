#include<stdio.h>
void traverse_array(int arr[],int n){
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The original array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void insert_element(int arr[],int n,int num,int pos){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
void delete_element(int arr[],int *size,int ele){
    int pos=-1;
    for(int i=0;i<=*size;i++) {
        if(arr[i]==ele) {
            pos = i;
            break;
        }
    }
    if(pos!=-1) {
        for(int i=pos;i<=*size-1;i++) {
            arr[i]=arr[i+1];
        }
        (*size)--;
        for(int i=0;i<=*size;i++) {
            printf("%d ",arr[i]);
        }
    } else {
        printf("\nElement not present");
    }
}

int main(){
    int n,num,pos,ele,size;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    size=n;
    printf("Enter the elements of array : ");    
    traverse_array(arr,n);
    printf("\nEnter the number to be inserted : ");
    scanf("%d",&num);
    printf("Enter the position at which you want to insert the element : ");
    scanf("%d",&pos);
    insert_element(arr,n,num,pos);
    printf("\nEnter the element to be deleted : ");
    scanf("%d",&ele);
    printf("Array after deletion is : ");
    delete_element(arr,&size,ele);
    return 0;
}