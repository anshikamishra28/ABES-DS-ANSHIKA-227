#include<stdio.h>
int main()
{
    int n,key,beg,end,mid,i,found=0;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched ");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(key==arr[i]){
            printf("element found at %d",mid);
            found=1;
            break;

        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else
        beg=mid+1;
    }
    if(beg>end && found==0)
    printf("element not present");
    return 0;
}