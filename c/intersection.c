#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of first array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of first array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",& arr[i]);
    }
    int arr[m];
    printf("enter the size of second array : ");
    scanf("%d",&m);
    int arr[m];
    printf("enter the elements of second array : ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}