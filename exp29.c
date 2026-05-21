#include <stdio.h>

int main() {
    int n, i, j, temp, search, first, last, middle;

    // 1. Get array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    // 2. Get array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // 3. Sort the array (Binary Search requires a sorted list)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array :"); 
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // 4. Get the element to search for
    printf("\n\nEnter value to find: ");
    scanf("%d", &search);

    // 5. Binary Search Logic
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (array[middle] < search) {
            first = middle + 1;
        } else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        } else {
            last = middle - 1;
        }

        middle = (first + last) / 2;
    }

    if (first > last) {
        printf("Not found! %d isn't present in the list.\n", search);
    }

    return 0;
}
