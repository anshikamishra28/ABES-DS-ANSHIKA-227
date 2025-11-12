#include<stdio.h>

int BinSearch(int arr[], int n, int key) {
    int beg=0,end=n-1,mid;
    while (beg<=end) {
        mid=(beg+end)/2;
        if (key==arr[mid]) {
            return mid;
        } 
        else if(key<arr[mid]) {
            end=mid-1;
        } 
        else {
            beg=mid+1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d", &key);

    int found = BinSearch(arr, n, key);
    if (found != -1) {
        printf("Element found at index %d\n ", found);
    } else {
        printf("Element not present\n");
    }
    return 0;
}
