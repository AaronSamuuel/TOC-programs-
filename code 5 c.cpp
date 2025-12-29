#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i = 0, j;

    printf("Enter string: ");
    scanf("%s", s);

    j = strlen(s) - 1;

    while (i < j && s[i] == '0' && s[j] == '0') {
        i++; j--;
    }

    while (i <= j) {
        if (s[i] != '1') {
            printf("String does NOT belong to the CFG\n");
            return 0;
        }
        i++;
    }

    printf("String belongs to the CFG\n");
    return 0;
}

