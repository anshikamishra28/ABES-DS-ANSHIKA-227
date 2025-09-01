#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The original array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int ele,pos;
    printf("\nEnter the element to be deleted : ");
    scanf("%d",&ele);
    int found=1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==ele)
        {
        found=0;
        pos=i;
        break;
        }
    
    }
    if(found==0)
    {
        for(int i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array after deletion : ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
        else { 
            printf("Element not present");
        }
    return 0;
}