#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i = 0, c0 = 0, c1 = 0;

    printf("Enter string: ");
    scanf("%s", s);

    while (s[i] == '0') { c0++; i++; }
    while (s[i] == '1') { c1++; i++; }

    if (i == strlen(s) && c0 == c1)
        printf("String belongs to the CFG\n");
    else
        printf("String does NOT belong to the CFG\n");

    return 0;
}

