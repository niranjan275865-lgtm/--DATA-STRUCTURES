#include <stdio.h>

int main() {
    int a[5] = {10, 25, 30, 15, 20};
    int i, largest, second;

    largest = second = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d\n", second);
    return 0;
}