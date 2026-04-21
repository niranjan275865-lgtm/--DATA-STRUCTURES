#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int i, sorted = 1;

    for (i = 0; i < 4; i++) {
        if (a[i] > a[i + 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted)
        printf("Array is sorted\n");
    else
        printf("Array is not sorted\n");

    return 0;
}