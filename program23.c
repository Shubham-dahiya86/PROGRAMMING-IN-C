#include <stdio.h>
int findMax(int arr[], int size) {
    int max = arr[0];  

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];  

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }
    return min;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    int min = findMin(arr, n);

    printf("\nThe maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);

    return 0;
}
