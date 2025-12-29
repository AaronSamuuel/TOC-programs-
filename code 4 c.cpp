#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i, n;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            printf("String does NOT belong to the CFG\n");
            return 0;
        }
    }

    printf("String belongs to the CFG\n");
    return 0;
}

