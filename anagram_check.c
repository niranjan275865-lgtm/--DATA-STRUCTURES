#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++) {
        freq[(int)s1[i]]++;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        freq[(int)s2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
``