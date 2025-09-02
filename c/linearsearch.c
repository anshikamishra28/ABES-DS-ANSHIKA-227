#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the element to be searched :");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
        if (flag==1){
            printf("found");
            
        }
        else{
            printf("not found");
        }

    
    return 0;
}
