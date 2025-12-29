#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    printf("Enter string: ");
    scanf("%s", s);

    if (strstr(s, "101"))
        printf("String belongs to the CFG\n");
    else
        printf("String does NOT belong to the CFG\n");

    return 0;
}

