#include<stdio.h>
int mid,l,h,n,size;
int merge(int arr[],int size,int l,int h, int mid){
    int m,i=0,j=0,k=0;
     i=j=k=0;
     int brr[size];int crr[m];
    while(i<n && j<m){
        if(arr[i]<=brr[j])
        {
            crr[k]=arr[i];
            i++;
            k++;
        }
        else if (arr[i]>brr[j]){
            crr[k]=brr[j];
            j++;
            k++;       
        }
    }
        while(i<size){
            crr[k]=arr[i];
            i++;
            k++;
        }
        while(j<m){
            crr[k]=brr[j];
            j++;
            k++;
        } 
    printf("\nMerged array is : ");
    for(int x=0;x<size+m;x++)
    {
        printf("%d ",crr[x]);
    }
}
int merge_sort(int arr[],int l,int h){
    if(l<h){
        mid=(l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,size,l,h,mid);
    }
}
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sorted array is : ");
    merge_sort(arr,l,h);
    return 0;
}