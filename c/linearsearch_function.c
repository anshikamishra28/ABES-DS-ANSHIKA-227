#include <stdio.h>

int LinSearch(int arr[], int n, int key){
    int flag=0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Element found at %d ",i);
    else
    printf("Element not found");
}

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to be searched : ");
    scanf("%d", &key);

    int flag = LinSearch(arr, n, key);
    
    return 0;
}

