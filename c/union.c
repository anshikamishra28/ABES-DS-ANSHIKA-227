//union of two sets
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the size of array :");
    scanf("%d",&m);
    int i,j,k=0;
    int arr[n],brr[m],uni[m+n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<m;j++){
        scanf("%d",&brr[j]);
    }
    i=j=k=0;

    while(i<n&&j<m){
        if(arr[i]<brr[j]){
            uni[k]=arr[i];
            i++;
            k++;
        }
        
        else if(arr[i]>brr[j]){
            uni[k]=brr[j];
            j++;
            k++;
        }
    }
    while(i<n){
        uni[k]=arr[i];
        i++;
        k++;
    }
    while(j<m){
        uni[k]=brr[j];
        j++;
        k++;
    }
    printf("union of two sets is:\n");
    for(int x=0;x<n+m;x++){
        printf("%d ",uni[x]);
    }

    return 0;
}