 #include<stdio.h> 
#include<stdlib.h> 
int merge(int a[],int l,int mid,int h) 
{ 
    int size = h - l + 1; 
    int temp[size];          
    int i = l;               
    int j = mid + 1;         
    int k = 0; 
    while (i <= mid && j <= h) { 
        if (a[i] <= a[j]) { 
            temp[k++] = a[i++]; 
        } else { 
            temp[k++] = a[j++]; 
        } 
    } 
    while (i <= mid) { 
        temp[k++] = a[i++]; 
    } 
    while (j <= h) { 
        temp[k++] = a[j++]; 
    } 
    for (i = 0; i < k; i++) { 
        a[l + i] = temp[i]; 
    } 
} 
int merge_sort(int a[],int l,int h) 
{ 
    int mid; 
    if(l<h) 
    { 
        mid=(l+h)/2; 
        merge_sort(a,l,mid); 
        merge_sort(a,mid+1,h); 
        merge(a,l,mid,h); 
    } 
} 
int main() 
{ 
    int n; 
    printf("Enter the size of the array: "); 
    scanf("%d",&n); 
    int a[n]; 
    printf("Enter the elements:\n"); 
    for(int i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
merge_sort(a,0,n-1); 
printf("Sorted array: "); 
for (int i = 0; i < n; i++) { 
printf("%d ", a[i]); 
} 
printf("\n"); 
return 0;
}