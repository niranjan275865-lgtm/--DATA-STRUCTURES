#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int i, even = 0, odd = 0;

    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);
    return 0;
}