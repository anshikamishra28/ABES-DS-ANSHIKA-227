#include<stdio.h>
int max=0,count[100]={0},arr[100],brr[100];
int count_sort(int arr[],int n){
    max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for (int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        brr[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }  
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
}
int main(){
    int n,arr[100];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("The sorted array is : ");
    count_sort(arr,n); 
    return 0;
}