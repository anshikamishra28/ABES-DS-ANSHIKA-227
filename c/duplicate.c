#include<stdio.h>
int main()
{
     int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // to find the largest element of arr because the largest element of arr is the size of brr
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max=%d\n",max);
    int brr[max+1];

    // initilaisng hte value of all elements of brr as 0 
    for(int i=0;i<=max;i++){
        brr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        
        brr[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        if (brr[i]>0)

        {
        printf("%d occured %d times\n",i,brr[i]);
        }
        
    }
    return 0;
}