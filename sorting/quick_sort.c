#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[h];
    int i=l-1;
    for (int j=l;j<h; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void quickSort(int arr[],int l,int h) {
    if (l<h) {
        int p = partition(arr, l, h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : ");
     for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sorted array is : ");
    quickSort(arr, 0, n-1);
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
