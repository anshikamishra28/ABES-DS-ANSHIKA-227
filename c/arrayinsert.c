#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int num,pos;
    printf("\nEnter the number ");
    scanf("%d",&num);
    printf("Enter the position ");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
 return 0;
}