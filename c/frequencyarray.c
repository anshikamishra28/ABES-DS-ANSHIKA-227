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
    int count=0,i;
    int key;
    printf("Enter the element to be checked : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        count++;
    }
    if(count>0)
    {
        printf("%d is repeated %d times ", key , count);
    }
    else if(arr[i]!=key)
    {
        printf("%d is not present in the array",key);
        
    }
    else{
        printf("%d is not repeated",key);
    }
    return 0;
}