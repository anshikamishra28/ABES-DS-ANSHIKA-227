#include<stdio.h>
int main()
{
    int n,m,i=0,j=0,k=0;
    printf("Enter the size of first array : ");
    scanf("%d",&n);
    printf("Enter the size of second array : ");
    scanf("%d",&m);
    int arr[n],brr[m],c[m+n];
    printf("Enter the elements of first array : ");
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The first array is : ");
    for( i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the elements of second array : ");
    for( j=0;j<m;j++)
    {
        scanf("%d",&brr[j]);
    }
    printf("The second array is : \n");
    for( j=0;j<m;j++)
    {
        printf("%d ",brr[j]);
    }

//reseting the index to finally start the merging process 

    i=j=k=0;


    while(i<n && j<m){
        if(arr[i]<=brr[j])
        {
            c[k]=arr[i];  // first assign the value then increase the index
            i++;
            k++;
        }
        else if (arr[i]>brr[j]){
             c[k]=brr[j];
            j++;
            k++;       
        }
    }

        while(i<n){
            c[k]=arr[i];
            i++;
            k++;
        }
        while(j<m){
            c[k]=brr[j];
            j++;
            k++;
        }
    
    printf("\nMerged array is : ");
    for(int x=0;x<n+m;x++)
    {
        printf("%d ",c[x]);
    }
    
    return 0;
}
